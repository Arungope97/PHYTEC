/* 26 Program to find the sum of digits of a number until the sum is reduced to 1 digit.
   */
#include<stdio.h>
int main(void)
{
	long num;
	int dig,sum;
	printf("Enter a number : ");
	scanf("%ld",&num);
	printf("%ld->",num);
	do
	{
		sum = 0; 
		while(num!=0) 
		{
			dig=num%10;
			sum+=dig;
			num/=10;
		}
		printf("%d\t",sum);
		num=sum;
	}while(num/10!=0);  	
	return 0;
}

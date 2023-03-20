//add two no. using pointr
#include<stdio.h>
int main()
{
    int a,b,sum;
    int *ptr=&a;
    int *ptr1=&b;
    scanf("%d%d",&a,&b);
    sum=*ptr+*ptr1;
    printf("add value=%d",sum);
}
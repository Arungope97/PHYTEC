//array of 10 integer
#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    
     for(i=0;i<=10;i++)
     {
        scanf("%d",&a[i]);
        sum=sum+a[i];
             
     printf("value=%d\n",sum);
     }
}
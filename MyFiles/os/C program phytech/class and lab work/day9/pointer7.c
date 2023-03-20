//find the factorial of a given no. using pointer
#include<stdio.h>
int main()
{
    int n=5,sum=1,*p;
    p=&n;
    for (int i=0;i<n;i++)
    {
        sum=sum* (*p-i);
    }
    printf("%d",sum);
    }

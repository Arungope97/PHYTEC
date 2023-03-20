//find the maximum no. between two no.
#include<stdio.h>
int main()
{
    int a,b,temp;
    int *ptr=&a;
    int *ptr1=&b;
    scanf("%d%d",&a,&b);
    if(*ptr>*ptr1)
    {
    printf("maximum value is=%d",*ptr);
    }
    printf("maximum value is=%d",*ptr1);
} 
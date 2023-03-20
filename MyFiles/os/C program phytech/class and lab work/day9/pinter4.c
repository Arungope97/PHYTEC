//store elements in array and print with help of pointer
#include<stdio.h>
int main()
{
    int a[5],i,*ptr;
    for(i=0;i<=5;i++)
    {
    int *ptr=&a[i];
    }
    for(i=0;i<=5;i++)
    {
    scanf("%d",&a[i]);
    
    }

    printf("element-%d:%d",a[i],*ptr);

}
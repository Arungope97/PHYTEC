//get vlue from the array with help of pointer.
#include<stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9},i,*p;

    for(i=0;i<=10;i++)
    {
        printf("vslue of a %d from %p\n",a[i],&a[i]);
    }
     for(i=0;i<=10;i++)
    {
        printf("value of pionter %d of %p\n",(p+i),*(p+i));
    }
}
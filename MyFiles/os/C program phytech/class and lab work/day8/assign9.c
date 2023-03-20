#include<stdio.h>
void main()
{
    float arr[]={12.4,2.3,4.5,.7};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
}
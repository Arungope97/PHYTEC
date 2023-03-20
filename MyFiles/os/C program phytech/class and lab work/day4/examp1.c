#include<stdio.h>
int main()
{
    int b,c,a=(b=10,c=30);
    //sizeof (a++);
    printf("value of=%d",a);
    return 0;

}
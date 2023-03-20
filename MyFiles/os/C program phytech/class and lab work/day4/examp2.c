//using conditional operator
#include<stdio.h>
int main()
{
     int a,b;
    scanf("%d %d",&a,&b);
    (a>b) ? printf("greatest value is=%d",a) : printf("greatest value is=%d",b) ;
    return 0;
}
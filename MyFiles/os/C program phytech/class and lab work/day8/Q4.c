#include<stdio.h>
int sum(int*,int*);
int main()
{
    int a=20,b=56;
    //sum=a+b;
    printf("addition value=%d",sum(&a,&b));
}
int sum(int*a,int*b)
{
    return *a+*b;
}
#include<stdio.h>
int sum(int*,int*);
int sub(int*,int*);
int mul(int*,int*);
int div(int*,int*);
int main()
{
    int a,b;
    scanf("%d %d",&a ,&b);
    printf("add value=%d\n",sum(&a , &b));
    printf("sub value=%d\n",sub(&a , &b));
    printf("mul value=%d\n",mul(&a , &b));
    printf("div value=%d\n",div(&a , &b));
}
int sum(int*a,int*b)
{
    return *a+*b;
}
int sub(int*a,int*b)
{
    return *a -*b;
}
int mul(int*a,int*b)
{
    return *a * *b;
}
int div(int*a,int*b)
{
    return *a%*b;
}
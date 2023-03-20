//add two no. using pointr
#include<stdio.h>
int add(int *a,int *b)
{
    printf("%d",*a+*b);
}
int main() 
{ 
    int a,b;
    a=5,b=6;
    add(&a,&b);
}
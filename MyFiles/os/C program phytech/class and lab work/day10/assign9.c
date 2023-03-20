#include<stdio.h>
struct decl
{
    int n = 100;
}dl;
int main()
{
    printf("%d",dl.n);
    return 0;
}
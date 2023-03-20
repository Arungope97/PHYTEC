#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    int **q=&p;
    int ***r=&q;
    printf("%d %d %d %d",*p,**q,***r);
    return 0;
    
}
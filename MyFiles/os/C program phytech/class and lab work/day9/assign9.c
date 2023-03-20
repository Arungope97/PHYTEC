//base address of array a is 200
//adress of pointer p is 1000
//address of pointer q is 2000
#include<stdio.h>
int main()
{
    int a[]={3,2,5,0,31,45,7,67,9};
    int *q,*p=a;
    printf("%d %d %d\n",(*p)++,*p++,*++p);
    q=p+3;
    printf("%d\n",*q-3);
    printf("%d\n",*--p+5);
    printf("%d\n",*p + *q);
    return 0;
}
//base address of array a is 200
//adress of pointer p is 1000
//address of pointer qis 2000
#include<stdio.h>
int main()
{
    int a[]={20,32,-2,0,1,3,5,-7,11};
    int *p=a;
    int *q=&a[4];
    int d=p-q;
    printf("%d %d %d\n",d,*q,q);
    *q=25;
    *(p+1)=27;
    q=q-3;
    p=p+3;
    d=p-q;
    printf("%u %u %u %u %u",*p,*q,p,q,d);
    return 0;   
}
//base address of array a is 200
//adress of pointer p is 1000
//address of pointer q is 2000
#include<stdio.h>
int main()
{
    int a[]={3,2,5,0,31,45,7,67,9};
    int *p,*q;
    p=q;
    q=&a[0]+3;
    printf("%u %u %u\n",(*p)++,(*p)++,*(++p));
    printf("%d\n",*p);
    printf("%d\n",(*p)++);
    printf("%d",(*p)++);
    q--;
    printf("%d,(*q+2)--");
    printf("%d",(*p+2)-2);
    printf("%u\n",*(p++ -1)-1);
    return 0;
}
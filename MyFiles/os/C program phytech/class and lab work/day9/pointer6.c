//swap element using call by refrence
#include<stdio.h>
int(ptr*,ptr1*,ptr2*)
int *temp;
{
    int *ptr=&a;
    int *ptr1=&b;
    int *ptr2=&c;
    

    *temp=*ptr;
    *ptr=*ptr2;
    *ptr2=*ptr1;
    *ptr1=*ptr;



}
// #include<stdio.h>
// int swap(int *a ,int *b ,int *c)
// {
//     int *temp1;
//     temp1=c;
//     c=b;
//     b=a;
//     a=temp1;
//     printf("after swap:%d %d %d",*a,*b,*c);
//     }
//     int main()
//     {
//         int a=5,b=6,c=7;
//         printf("before swap:%d %d %d\n",a,b,c);
//         swap(&a,&b,&c);
//     }
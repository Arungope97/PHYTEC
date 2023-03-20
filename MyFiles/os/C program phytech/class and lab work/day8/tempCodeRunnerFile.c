#include<stdio.h>
int add(int*x,int*y);
int sub(int*x,int*y);
int mul(int*x,int*y);
int div(int*x,int*y);
int (*func)(int,int);
int main()
{
    int result;
    func = &add;
    result=(*func)(10,20);
    printf("value of add=%d",&result);

    func = &sub;
    result=(*func)(10,20);
    printf("value of sub=%d",&result);

    func = &mul;
    result=(*func)(10,20);
    printf("value of mul=%d",&result);

    func = &div;
    result=(*func)(10,20);
    printf("value of div=%d",&result);

}
int add(int*x,int*y)
 {
    return *x + *y;
 }
 int sub(int*x,int*y)
 {
    return *x - *y;
 }
 int mul(int*x,int*y)
 {
    return *x * *y;
 }
 int div(int*x,int*y)
 {
    return *x / *y;
 }
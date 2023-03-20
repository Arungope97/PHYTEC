#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int (*func)(int,int);
int main()
{
    int result;
    func = &add;
    result=(*func)(10,20);
    printf("value of add=%d\n",result);

    func = &sub;
    result=(*func)(10,20);
    printf("value of sub=%d\n",result);

    func = &mul;
    result=(*func)(10,20);
    printf("value of mul=%d\n",result);

    func = &div;
    result=(*func)(10,20);
    printf("value of div=%d\n",result);

}
int add(int x,int y)
 {
    return  x + y;
 }
 int sub(int x,int y)
 {
    return x - y;
 }
 int mul(int x,int y)
 {
    return x * y;
 }
 int div(int x,int y)
 {
    return x / y;
 }
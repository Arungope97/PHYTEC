#include<stdio.h>
int main()
{ 
    int a,b,c,d,e;
    a=sizeof(int);
    b=sizeof(char);
    c=sizeof(float);
    d=sizeof(signed);
    e=sizeof(unsigned);
    printf("size of int=%d\n size of char=%d\n size of float=%d\n size of signed=%d\n size of unsigned=%d\n",a,b,c,d,e);
    return 0;

}
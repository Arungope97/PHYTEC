#include<stdio.h>

int main(){
    int a=sizeof(int);
    int b=sizeof(char);
    int c=sizeof(float);
    int d=sizeof(double);
    printf("size is int:%d float:%d double:%d char:%d",a,b,d,c);
    return 0;
}
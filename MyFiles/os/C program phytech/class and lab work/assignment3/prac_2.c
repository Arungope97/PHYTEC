#include<stdio.h>
int main()
{
    int reg_led=8,reg_led1;
    int a=2;
    reg_led1=reg_led | 1<<a;
    printf("value=%d",reg_led1);
}
//do arithmatic operation using enum
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b;
    int arith;
    enum{add,sub,mul,div,square};

    printf("\n menu \n");
    printf("0.add\n \n");
    printf("1.sub\n \n");
    printf("2.mul\n \n");
    printf("3.div\n \n");
    printf("4.square\n \n");
    printf("enter two number\n");
    scanf("%d %d",&a,&b);
    printf("enter your choice\n");
    scanf("%d",&arith);
    switch(arith)
    {
        case add: printf("value=%d",a+b);
                  break;
        case sub: printf("value=%d",a-b);
                  break;
        case mul: printf("value=%d",a*b);
                  break;
        case div: printf("value=%d",a/b);
                  break;
        case square: printf("value=%d",a+b);
                  break;
    }return 0;
}
#include<stdio.h>
//#pragma pack(1)
 struct employee
{
        int a;
        char c;
        unsigned char reserved[3];
        double b;
}__attribute__((packed))tmp={10,'A',20.14};
int main()
{   
    char *ptr=(double *)&tmp;
    printf("value of c is %lf : ",*(int *)(ptr+5));
    printf("%d\n",sizeof(tmp));
    // printf("address of a=%p\n",&tmp.a);
    // printf("address of c=%p\n",&tmp.c);
    // printf("address of b=%p\n",&tmp.b);
}
// {
//     int a,*p1=&a;
//     char c,*p2=&c;
//     double b,*p3=&b;
//     char tmp,*p4=&tmp;
//     printf("%d\n",sizeof(tmp));
//     printf("%p\n",&a);
//     printf("%p\n",&b);
//     printf("%p\n",&c);
//     printf("%p\n",&tmp);
// }

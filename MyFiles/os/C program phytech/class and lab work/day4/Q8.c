#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    int f,g,h,i,j;
    f=6,g=7,h=9,i=4,j=9;
    if(a==f && b==g && c==h && d==i && e==j)
    {
        printf("correct password");
    }else {
        printf("incorrect password");
    }

}
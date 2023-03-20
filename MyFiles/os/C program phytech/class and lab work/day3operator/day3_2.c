#include<stdio.h>
int main()
{
    int a,b,i,j,k,n;
    printf("enter the value of a,b\n");
    scanf("%d %d",&a,&b);
    //printf("binary no.=%d",a);
    for(i=7;i>=0;--i)
    {
        j=(a>>i)&0x1;
        printf("binary value of j=%d\n",j);
        k=(b>>i)&0x1;
        printf("binary value of k=%d\n",k);
        n=j&k;
        printf("value=%d\n",n);
    }
}
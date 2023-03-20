/**/
#include<stdio.h>
int main()
{
    int a,i,j;
    printf("enter the value of a \n");
    scanf("%d",&a);
    //printf("binary no.=%d",a);
    for(i=7;i>=0;--i)
    {
        j=(a>>i)&1;
        


        //printf("position:%d\n",i);
        
        printf("binary value of=%d\n",j);
    }
}
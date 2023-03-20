#include<stdio.h>
int main()
{
    int a,i,j,count;
    printf("enter the value of a \n");
    scanf("%d",&a);
    for(i=7;a>=i;i--)
    {
        j=(a>>i)&0x1;
        printf("binary value of j=%d\n",j);

        if(j==1)
        {
            count++;
            
        }
        printf("value=%d\n",count);
    }
}
#include<stdio.h>
int main()
{
int a[5],i;
for(i=0;i<=5;i++)
{
    printf("value=");
    scanf("%d",&a[i]);
}
for(i=0;i<=5;i++)
{
    printf("output=%d\n",a[i]);
}
} 
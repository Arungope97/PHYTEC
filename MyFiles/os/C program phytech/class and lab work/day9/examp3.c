//array as an argument to the function 
#include<stdio.h>
int main()
{
int a[10]={1,2,3,4,5,6,7,8,9},i,*p;
    p=&a;
    for(i=0;i<=10;i++)
    {   
        printf("value of a %d from %x\n",a[i],&a[i]);
    }
    printf("\n");

}
int read(int a[])
{
    for(int i=0;i<=10;i++)
    {
        a[i]=i+10;
        printf("value of array after change%d\n",a[i]);
    }
}
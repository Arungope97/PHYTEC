//to compute the sum of all elements in an array using pointers
#include<stdio.h>
int main()
{
    int n=5,*ptr,sum=0,b,*ptr1;
    int arr[5];
    ptr1=arr;
    ptr=&b;
    for (int i = 0; i <n; i++)
    {
        scanf("%d",ptr);
        *(ptr1+i)=*ptr;
        sum=sum+*(ptr);
    } 
       printf("%d\n",sum);
       for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}
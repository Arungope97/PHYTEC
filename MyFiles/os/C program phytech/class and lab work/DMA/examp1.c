//allocate and create a memory space of 8 byte and display address
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p ,n,i;
    printf("enter the element\n");
    scanf("%d",&n);
    p = (int *) malloc (n*sizeof(int));
    if(p==NULL)
    {
        fprintf(stderr,("\nfail to alloct memory"));
        exit(1);
    }
    printf("\n memory allocated at : %x",p);
    printf("\n intial values \n");
    for(int i=0;i<n;i++)
     printf("%d",p[i]);
    for(i=0;i<n;i++)
     p[i] = i+1;
     printf("\n");
     for(i=0;i<n;i++)
     printf("%d",p[i]);
     printf("\n");
}
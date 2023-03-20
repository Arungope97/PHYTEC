#include<stdio.h>
int count();
int main()
{
   count();
   count();
   count();
   count();
}
int count()
{
    static count=0;
    count++;
    printf("%d",count);
}
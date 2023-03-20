#include<stdio.h>
int count()

{
    auto int count=0;
    count++;
    printf("%d",count);
    printf("address=%d\n",&count);
}
int main()
{
   count();
   count();
   count();
   count();
}
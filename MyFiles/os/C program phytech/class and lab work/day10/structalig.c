// structure alligned
#include<stdio.h>
int main()
{
    int a;
    int *c=&a;
    if(a%sizeof(a)==0)
    {
        printf("\nallignment");
    }else{
        printf("\nunallignment");
    }
}
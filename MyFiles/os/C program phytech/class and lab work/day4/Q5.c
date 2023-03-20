#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("greatest number=%d",a);
        }else 
        {
            printf("greatest number=%d",c);
        }
    }
else if(b>a)
   {
      if(b>c)
   {
            printf("greatest number=%d",b);
        }else 
        {
            printf("greatest number=%d",c);
        }
        return 0;
}
}
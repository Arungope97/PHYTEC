#include<stdio.h>
#define NEGATIVE
int main()
{
#ifdef POSITIVE
	int a=20,b=20;
#endif
#ifdef NEGATIVE
	int a=10,b=-20;
#endif
      printf("\n %d+%d=%d",a,b,a+b);
}

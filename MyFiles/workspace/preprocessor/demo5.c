#include<stdio.h>
#define ODD
int main()
{
  #ifdef EVEN 
	int a=4,b=6

	#endif
#ifdef ODD
		int a=7,b=9;
#endif
	printf("value is %d +%d=%d",a,b,a+b);

}


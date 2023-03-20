#include<stdio.h>
void main()
{
int a=10;
float f=10.4;
char ch='a';
 void *p;
 p=&a;
printf("value of a %d\n",*(int*)p);
 p=&f;
printf("value of a %f\n",*(float*)p);
 p=&ch;
printf("value of a %ch\n",*(char*)p);
}
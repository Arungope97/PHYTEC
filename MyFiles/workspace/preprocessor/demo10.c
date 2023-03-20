#include<stdio.h>
#include<string.h>

#define str(s) #s
#define string_concat(s1,s2) str(s1 ## s2)

int main()
{
char name[30]=string_concat(PHYTEC,EMBEDDED);
printf("\n name of organisation is %s\n",name);
}

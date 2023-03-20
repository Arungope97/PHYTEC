#include<stdio.h>
#include<string.h>
#define string_concat(result,s1,s2) strcat(result,#s1); strcat(result,#s2)

int main()
{
char name[30]={0};
string_concat(name,veda,solutions);
printf("\nname of organisation is %s\n",name);

}

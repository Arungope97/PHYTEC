//print individual character of string in reverse order.
#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="welcome";
    int i=0;
    int n=strlen(s);
    while(s[i]!='\0')
    {
        printf("%c",s[n-i-1]);
        i++;
    }
}
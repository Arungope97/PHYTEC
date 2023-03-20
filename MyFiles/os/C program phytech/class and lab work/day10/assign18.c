#include<stdio.h>
int main()
{
    struct alphabets
    {
        char firstletter;
        struct alphabets a;

    }al;
    al.firstletter='a';
    printf("%c",al.firstletter);
}
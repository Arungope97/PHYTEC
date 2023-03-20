#include <stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    if (strcmp(argv[1],"-s") == 0)
    {
         int n, i, s = 0;
         for (i = 2; i < argc; i++)
         {
            sscanf(argv[i], "%d", &n);
             s += n; 
         }
         printf("sum is:%d\n", s); 
    }
         
}
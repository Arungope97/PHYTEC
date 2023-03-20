#include<stdio.h>
void randomPasswordGeneration();
int main()
{
     int N;
     printf("Give length of password\n");
     scanf("%d",&N);
     randomPasswordGeneration(N);
         return 0;
}
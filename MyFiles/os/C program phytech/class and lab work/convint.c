#include<stdio.h>
int main()
{
    int total,val;
    scanf("%d",&total);
    val=total/100;
    printf("%d notes of 100 \n",val);
    total=total-(val*100);
    val=total/50;
    printf("%d notes of 50 \n",val);
    total=total-(val*50);
    val=total/20;
    printf("%d notes of 20 \n",val);
    total=total-(val*20);
    val=total/10;
    printf("%d notes of 10 \n",val);
    total=total-(val*10);
    val=total/5;
    printf("%d notes of 5 \n",val);
    total=total-(val*5);
    val=total/2;
    printf("%d notes of 2 \n",val); 
    total=total-(val*2);
    printf("%d notes of 1 \n",val); 
    return 0;




}
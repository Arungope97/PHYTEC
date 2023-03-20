#include<stdio.h>

int main(){
    int a,b,val;
    scanf("%d%d",&a,&b);
    val=a%b;
    if (val==0) {
        printf("possible");
    }
    else{
        printf("not possible");
    }
}
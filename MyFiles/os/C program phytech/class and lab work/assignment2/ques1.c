#include<stdio.h>

int main(){
    int a,s;
    s=0;
    for (int i=1;i<=5;i++){
        scanf("%d",&a);
        if (a%2 !=0){
            s=s+a; 
        }
    }
    printf("sum of all odd num is : %d",s);
    return 0;
}
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n>0){
        if (n%2==0){
            printf("positive even");
        }
        else{
            printf("positive odd");
        }
    }
    else {
        if (n%2==0){
            printf("negetive even");
        }
        else{
            printf("negative odd");
        }
    
    }
    return 0;
}
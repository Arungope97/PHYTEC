#include<stdio.h>

int main(){
    char n;
    scanf("%c",&n);
    if (n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
        printf("%c is vowel",n);
    }
    else{
        printf("%c is consonant",n);
    }
    return 0;
}
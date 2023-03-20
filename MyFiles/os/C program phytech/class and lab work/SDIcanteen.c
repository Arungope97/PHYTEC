//Arun gope
//SDI canteen
#include<stdio.h>

int main()
{
    printf("WELCOME\n");
    main:
    printf("What is your wish dish??\n");
    char dish;
    int l=30;
    int k=80; 
    int m=40;
    int a; 
    int quantity,total=0;
    // gets(dish);
    //main:w

    scanf("%c",&dish);
    switch(dish)
    {   
        case 'w':   scanf("%d",&quantity);
                    total=total+m*quantity;
                    break;
        case 'd':
                    scanf("%d",&quantity);
                    total=total+k*quantity;
                    break;
        case 'i':
                    scanf("%d",&quantity);
                    total=total+l*quantity;
                    break;

        default: 
            printf("plese choose correct\n");
    }
    printf("\ncontinue for 1 and 2:");
    scanf("%d",&a);
    if(a==1){
        goto main;
    }
    else{
        printf("%d",total);
        printf("thankyou");
    }
}

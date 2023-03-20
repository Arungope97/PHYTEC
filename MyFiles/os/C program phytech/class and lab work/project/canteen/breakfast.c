#include<stdio.h>

int breakfast(int total)
{
    int quantity,c;
    tys:
    printf("breakfast\n");
    printf("iteams\n");
    printf("\n1. puri\n2. uthampam\3. idli sambar\n4. pitha\n5. samosa\n6. sambar wada\n7. chole bhature");
    printf("chiose your dish:\n");
    scanf("%d",&c);
    printf("enter the quantity:\n");
    scanf("%d",&quantity);
    switch(c)
    {
        case 1:
        printf("puri");
        total=quantity*10;
        printf("\ntotal cost is%d\n",total);
        break;

        case 2:
        printf("uthampam");
        total=quantity*10;
        printf("\ntotal cost is%d\n",total);
        break;

        case 3:
        printf("idli sambar");
        total=quantity*20;
        printf("\ntotal cost is%d\n",total);
        break;

        case 4:
        printf("pitha");
        total=quantity*20;
        printf("\ntotal cost is%d\n",total);
        break;

        case 5:
        printf("samosa");
        total=quantity*10;
        printf("\ntotal cost is%d\n",total);
        break;

        case 6:
        printf("tea");
        total=quantity*7;
        printf("\ntotal cost is%d\n",total);
        break;

        case 7:
        printf("chole bhature");
        total=quantity*30;
        printf("\ntotal cost is%d",total);
        break;
        default:
        printf("wrong input\n");
        goto tys;
        break;
      
        
    }
}
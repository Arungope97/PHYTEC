#include<stdio.h>

int lunch(int total)
{
    int quantity,c;
    suu:
    printf("lunch\n");
    printf("iteams\n");
    printf("\n1. rice\n2. roti\3. dal\n4. panner sabji\n5. chicken sabji\n6. fries\n7. swets");
    printf("chiose your dish:\n");
    scanf("%d",&c);
    printf("enter the quantity:\n");
    scanf("%d",&quantity);
    switch(c)
    {
        case 1:
        printf("rice");
        total=quantity*20;
        printf("\ntotal cost is%d\n",total);
        break;

        case 2:
        printf("roti");
        total=quantity*5;
        printf("\ntotal cost is%d\n",total);
        break;

        case 3:
        printf("dal");
        total=quantity*20;
        printf("\ntotal cost is%d\n",total);
        break;

        case 4:
        printf("panner sabji");
        total=quantity*40;
        printf("\ntotal cost is%d\n",total);
        break;

        case 5:
        printf("chicken sabji");
        total=quantity*45;
        printf("\ntotal cost is%d\n",total);
        break;

        case 6:
        printf("fries");
        total=quantity*10;
        printf("\ntotal cost is%d\n",total);
        break;

        case 7:
        printf("sweets");
        total=quantity*5;
        printf("\ntotal cost is%d\n",total);
        break;
        default:
        printf("\n wrong option\n");
        goto suu;
        break;
    }
}
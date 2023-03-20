#include<stdio.h>
int dinner(int total)
{
    int quantity,c;
    tu:
    printf("dinner\n");
    printf("1.roti\n2.dal\n3.paneer sabji\n4.chicken sabji\n5.allo sabji\n6.beans sabji\n7.sweet");
    printf("\nenter the choice:\t");
    scanf("%d",&c);
    printf("enter the quntyty:\t");
    scanf("%d",&quantity);
    switch(c)
    {
        case 1:
        {
           
            total= quantity*5;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        case 2:
           
            total= quantity*20;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        case 3:
             
            total= quantity*40;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        case 4:
          
            total= quantity*45;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        case 5:
           
            total= quantity*40;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        case 6:
           
            total= quantity*20;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        case 7:
            
            total= quantity*5;
            printf("total price for quantity %d is %d\n",quantity,total);
            break;
        default :
            printf("invalid input");
            goto tu;
            break;
        }
    }
}
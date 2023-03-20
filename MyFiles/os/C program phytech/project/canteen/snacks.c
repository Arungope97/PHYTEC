#include<stdio.h>

int snacks(int total)
{
    int quantity,c;
    jat:
    printf("snacks\n");
    printf("\n1.aloochop\n2.samosa\n3.wada\n4.papdi\n5.dal wada\n6.cream bread\n7.chuda mixture");
    printf("enter the dish:\n");
    scanf("%d",&c);
     printf("enter the quantity:\n");
    scanf("%d",&quantity);
    switch(c)
    {
        case 1:
        
          total=quantity*5;
        printf("cost for aloochop is %d\n",total);
        break;
        case 2:
       
          total=quantity*5;
        printf("cost for samosa is %d\n",total);
        break;
        case 3:
      
          total=quantity*5;
        printf("cost for  wada is %d\n",total);
        break;
        case 4:
       
          total=quantity*5;
        printf("cost for papad  is %d\n",total);
        break;
        case 5:
       
          total=quantity*5;
        printf("cost for dal wada is %d\n",total);
        break;
        case 6:
        
          total=quantity*5;
        printf("cost for cvream is %d\n",total);
        break;
        case 7:
        
          total=quantity*5;
        printf("cost for chuda mixture is %d\n",total);
        break;
        default:
        printf("invalid input");
        goto jat;
        break;
    }

}
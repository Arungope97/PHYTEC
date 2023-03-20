#include<stdio.h>
#include"canteen.h"
int main()
{
    int x,total;
    char c;
    main:
    printf("welcome");
    printf("\n1.breakfast\n2.lunch\n3.snacks\n4.dinner");
    printf("\nenter the option:\t");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
    breakfast(total);
    break;
        case 2:
    lunch(total);
    break;
        case 3:
    snacks(total);
    break;
        case 4:
    dinner(total);
    break;
    default:
    printf("invalid input\n");
    break;
    }
  printf("\nif you want to select more then press 'y' else 'n'\n");
  scanf("%s",&c);
  if (c=='y')
  {
    goto main;
  }
  else
    {
        printf("thank you\n");
    }

}
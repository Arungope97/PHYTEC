#include<stdio.h>
int main()
{
    int mon,tue,wed,thu,fri,today;
    scanf("%d %d %d %d %d",&mon,&tue,&wed,&thu,&fri);

    if(mon>=tue && mon>=wed && mon>=thu && mon>=fri)
    
         {
            printf("%d",mon);
        }
     else if(tue>=mon && tue>=wed && tue>=thu && tue>=fri)
    
        {
            printf("%d",tue);
        } else if(wed>=mon && wed>=tue && wed>=thu && wed>=fri)
        {
            printf("%d",wed);
        }else if(thu>=mon && thu>=tue && thu>=wed && thu>=fri)
        {
            printf("%d",thu);
        }else if(fri>=mon && fri>=tue && fri>=wed && fri>=thu)
        {
            printf("%d",fri);
        }return 0;
    }    
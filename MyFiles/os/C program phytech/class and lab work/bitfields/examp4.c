#include<stdio.h>
struct calender 
{
    unsigned int m:4;
    unsigned int d:5;
    unsigned int y:12;
}cal;
int main()
{
    int day,month,year;
    printf("enter the day:");
    scanf("%d",&day);
    printf("enter the month:");
    scanf("%d",&month);
    printf("enter the year:");
    scanf("%d",&year);
    cal.d=day;
    cal.m=month;
    cal.y=year;
    // printf("todays date:%d:%d:%d",day,month,year);
    printf("todays date:%d:%d:%d",cal.d,cal.m,cal.y);
}

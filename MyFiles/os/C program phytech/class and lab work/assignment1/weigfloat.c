#include<stdio.h>
#include<math.h>
int main()
{
    float w1,w2,t1,t2;
    double avg;
    printf("weight1=");
    scanf("%f",&w1);
    printf("weight2=");
    scanf("%f",&w2);
    printf("item1=");
    scanf("%f",&t1);
    printf("item2=");
    scanf("%f",&t2);
    avg=((w1*t1)+(w2*t2))/(t1+t2);
    printf("avarage value is:%lf",avg);
    return 0;
}
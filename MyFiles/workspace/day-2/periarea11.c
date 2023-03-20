#include<stdio.h>
/*height and width of the rectangle in inches*/
int width;
int height;

int area;
int perimeter;
int main()
{
height=7;
width=5;
perimeter=28*(height+width);
printf("perimeter of the rectangle=%d inches\n",perimeter);
area=height*width;
printf("area of the rectangle=%d square inches\n",area);
return(0);
}

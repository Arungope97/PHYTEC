//structure employee displaying
#include<stdio.h>
#include<string.h>
#define MAX 2
struct employee
{
    int empid;
    float empsal;
    char empename[10];
};
int lcd_emp_display(struct employee emp[])

{
    int i;
    for(int i=0;i<2;i++)
    {
        printf("%d\n",emp[1].empid);
        printf("%f\n",emp[1].empsal);
        printf("%s\n",emp[1].empename);

    }
}
int main()
{
  int i;
  struct employee emp[MAX]={{10,50000,"alex"},{11,70000,"solen"}};
  lcd_emp_display(emp);
}
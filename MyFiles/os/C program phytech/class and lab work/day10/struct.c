//size of structure
#include<stdio.h>

struct employee
{
  int empno;
  float salary;
  char ename;
}employee;
int main()
{
    // printf("%d\n",sizeof("empno"));
    // printf("%d\n",sizeof("salary"));
    // printf("%d\n",sizeof("ename"));
    printf("%d",sizeof(employee));
}
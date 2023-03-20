///epmloyee structure
#include<stdio.h>

struct employee
{
    int empno;
    float sal;
    char ename[10];
};
int main()
{
struct employee emp1,emp2,emp3;
emp1.empno=10;
strcpy(emp1.ename,"alex");
emp1.sal=50000;
printf("%d\n%s\n%f\n",emp1.empno,emp1.ename,emp1.sal);
}
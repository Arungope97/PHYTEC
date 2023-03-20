///epmloyee structure
#include<stdio.h>
#include<string.h>
struct employee
{
    int empno;
    float sal;
    char ename[10];
};
int main()
{
struct employee emp[2]={{10,50000,"alex"},{11,70000,"solen"}};
// emp1.empno=10;
// strcpy(emp1.ename,"alex");
// emp1.sal=50000;
//printf("%d %s %f",emp1.empno,emp1.ename,emp1.sal);
for(int i=0;i<2;i++)
{
    printf("%d\n",emp[i].empno);
    printf("%f\n",emp[i].sal);
    printf("%s\n",emp[i].ename);
}
}
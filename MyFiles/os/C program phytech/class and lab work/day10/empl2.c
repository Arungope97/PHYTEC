//epmloyee structure using max
#include<stdio.h>
#include<string.h>
#define MAX 2
struct employee
{
    int empno;
    float sal;
    char ename[10];
};
int main()
{
struct employee emp[MAX]={{10,50000,"alex"},{11,70000,"solen"}};
for(int i=0;i<MAX;i++)
{
    printf("emp no=%d\n",emp[i].empno);
    printf("salary=%f\n",emp[i].sal);
    printf("name=%s\n",emp[i].ename);
}
}
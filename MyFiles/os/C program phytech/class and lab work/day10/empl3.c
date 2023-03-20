//employ structure using user input
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
struct employee emp[MAX];
scanf("%d %f %s",empno,sal,ename);
for(int i=0;i<MAX;i++)
{
    printf("emp no=%d\n",emp[i].empno);
    printf("salary=%f\n",emp[i].sal);
    printf("name=%s\n",emp[i].ename);
}
}

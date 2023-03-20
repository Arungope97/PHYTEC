#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Grade
{
    char grade[30];

} grd;

struct Student
{
    int s_id;
    int stu_ph;
    char s_name[30];
    char gender[30];
    struct Grade grd;
};

void display(struct Student stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter student %d ID, NAME, PHONE NUMBER, GENDER and GRADE respectively\n", i+1);
        printf("\n--------------------------------------------------\n");
        scanf("\n%d\n%s\n%x\n%s\n%s", &stu[i].s_id, stu[i].s_name, &stu[i].stu_ph, stu[i].gender, stu[i].grd.grade);
    }
    printf("\n");
    printf("\n****DATAILS ARE SHOWN BELOW**\n");
    printf("\nSL NO  \tSTUDENT ID  \tSTUDENT NAME   \tPHONE NUMBER \tGENDER  \tGRADE\n");
    printf("\n-----------------------------------------------------------------------------\n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d  \t %d   \t\t %s     \t %x     \t %s   \t %s\n", i+1, stu[i].s_id, stu[i].s_name, stu[i].stu_ph, stu[i].gender, stu[i].grd.grade);
        printf("\n-------------------------------------------------------------------------------\n");
    }
}

int main()
{
    int n;
    printf("\n****STUDENT DETAILS**\n");
    printf("\n--------------------------------------------------\n");
    printf("\nEnter total students: ");
    scanf("%d", &n);
    struct Student stu[n];
    display(stu, n);
}
// ARUN GOPE
// APPLICATION OF STUDENT MARKS REPORT
#include <stdio.h>
int main()
{

    char name[100];
    printf("name of student=");
    scanf("%s", name);

    int j;
    printf("\nroll no. of student=");
    scanf("%d", &j);
    int k, l, m;
    printf("\nmaths=");
    scanf("%d", &k);
    if (k >= 0 && k <= 40)
    {
        printf("\nGrade F");
    }
    else if (k >= 41 && k <= 60)
    {
        printf("Grade B\n");
    }
    else if (k >= 61 && k <= 80)
    {
        printf("Grade E\n");
    }
    else if (k >= 81 && k <= 100)
    {
        printf("Grade O\n");
    }
    printf("\nscience=");
    scanf("%d", &l);
    if (l >= 0 && l <= 40)
    {
        printf("Grade F\n");
    }
    else if (l >= 41 && l <= 60)
    {
        printf("Grade B\n");
    }
    else if (l >= 61 && l <= 80)
    {
        printf("Grade E\n");
    }
    else if (l >= 81 && l <= 100)
    {
        printf("Grade O\n");
    }
    printf("english=");
    scanf("%d", &m);
    if (m >= 0 && m <= 40)
    {
        printf("Grade F\n");
    }
    else if (m >= 41 && m <= 60)
    {
        printf("Grade B\n");
    }
    else if (m >= 61 && m <= 80)
    {
        printf("Grade E\n");
    }
    else if (m >= 81 && m <= 100)
    {
        printf("Grade O\n");
    }
    return 0;
}
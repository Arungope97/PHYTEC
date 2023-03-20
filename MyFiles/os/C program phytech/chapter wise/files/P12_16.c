/* 16 Program to read records from a file and calculate grade of each student
*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	struct record
	{
		char name[20];
		int roll;
		int marks;
	}student;
	FILE *fp;
	fp = fopen("stu","rb");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("\nNAME\t\tMARKS\t\tGRADE\n\n");
	while(fread(&student,sizeof(student),1,fp)==1)
	{
		printf("%s\t\t",student.name);
		printf("%4d\t\t",student.marks);
		if(student.marks>=80)
			printf("A\n");
		else if(student.marks>=60)
			printf("B\n");
		else
			printf("C\n");
	}
	fclose(fp);
	return 0;
}

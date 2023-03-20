//creating file with help of program
#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[30];
    FILE *fp;      //declaring file pointer
    printf("\n Enter new file name: ");
    scanf("%[^\n]",name);
    fp=fopen(name,"w");
    if(fp==NULL)
    {
        printf("\n fail to create file\n");
        exit(1);}
        printf("\n file created successfully\n");
}

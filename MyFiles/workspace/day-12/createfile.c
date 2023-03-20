#include<stdio.h>
#include<stdlib.h>
int main()
{
	char name[30],ch;
	FILE *fp;
	printf("\n enter new file name: ");
	scanf("%[^\n]",name);
	fp=fopen(name,"a");
	if(fp==NULL)
	{
	printf("\n fail file created succesfully\n");
        exit(1);}
	printf("\n file created succesfully\n");
	printf("\n enter data into file & press \"clte+d\"to end\n");
        while((ch=getchar())!=EOF)
        putc(ch,fp);
}
        /*fseek(fp,0,SEEK_SET);
        printf("\n\n data in file \n");
        while((ch=getc(fp))!=EOF)
	putchar(ch);
        fclose(fp);
}*/

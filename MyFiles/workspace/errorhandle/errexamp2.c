#include<stdio.h>
#include<errno.h>
#include<sys/types.h>
     #include<sys/stat.h>
     #include<fcntl.h>
int main()
{
        int fd;
        fd=open("hello.txt",O_RDONLY);
       if(fd==-1)
 {
  // printf("no such file");
   printf("error no is :%d\n ",errno);
   perror("no such file\n");
 }
       else
       {
       printf("file is find::\n");
       }
}



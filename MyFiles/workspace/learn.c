/*#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
        int fd;
        fd=open("/home/arun/workspace",O_CREAT);
        if(fd == -1)
        {
                printf("Unable to open the file");

        }
        else
        {
                printf("located successfully");
        }


}*/

#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int main()
{

        int fd;
        off_t offset;

        char buf[20];
        fd=open("/home/arun/workspace",O_RDWR|O_CREAT|O_APPEND);


        write(fd,"hello world",15);
        offset=lseek(fd,1,SEEK_SET);

        read(fd,buf,20);
        printf("%s",buf);
        close(fd);

}

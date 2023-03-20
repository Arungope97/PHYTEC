#include <stdio.h>
#include <string.h>
#include <fcntl.h> 
#include <errno.h> 
#include <termios.h> 
#include <unistd.h> 

int main() {
       	
  char data[20];
  int fd;
  fd = open("/dev/ttyUSB0", O_RDWR );
	if(fd == -1)
	{
		printf("unable to create file");
	}
	else
	{
		printf("file created successfully");
	}



  struct termios arun;

  tcgetattr(fd,&arun);

  arun.c_iflag &= ~(IXON | IXOFF | IXANY);
  arun.c_oflag &= ~OPOST;
  arun.c_lflag &= ~(ICANON |ECHO | ECHOE | ECHONL  | ISIG ); 
  arun.c_cflag &= ~(CSIZE | PARENB);
  arun.c_cflag &= ~CRTSCTS;
  arun.c_cflag |= CS8;
  arun.c_cflag |= (CREAD | CLOCAL);
  arun.c_cflag |= B9600;
  arun.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR|ICRNL); 
  arun.c_cc[VMIN] = 0;
  arun.c_cc[VTIME] = 0;
  arun.c_cflag &= ~CSTOPB;
  tcsetattr(fd,TCSANOW, &arun);
  
  while(1){

    printf("\n Waiting for message...\n");
    sleep(3);
    read(fd,data,sizeof(data));
    if(data > 0)
    {

            for(int i=0;i<20;i++)
	        {
                 printf("%c",data[i]);
            }
     
    }
    else
    {
      printf("Data not read");
    }

    memset(data,0,sizeof(data));
    
    sleep(1);
 
   
  }
  
  close(fd);
  return 0; 
}

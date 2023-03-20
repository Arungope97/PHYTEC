#include<stdio.h>
#pragma pack(1)
struct cal
{
    unsigned int m:4;
    unsigned int d:5;
    unsigned int y:12;
}dat;//__attribute__((packed))date;
int main()
{
    printf("size is %d",sizeof(dat));
}
#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char fileName[100];
    char buffer[1024] = {'\0'};
    int iRet = 0;

    printf("Enter the fileName:\n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    while((iRet = read(fd,buffer,sizeof(buffer))) != 0)
    {
       fwrite(buffer,1,iRet,stdout);
    }

    close(fd);

    return 0;
}
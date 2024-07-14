#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char fileName[100];
    char buffer[100] = {'\0'};
    int iRet = 0;
    int iSize = 0;

    printf("Enter the fileName:\n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    while((iRet = read(fd,buffer,sizeof(buffer))) != 0)
    {
        iSize += iRet;
    }

    printf("Size of file is : %d",iSize);

    close(fd);

    return 0;
}
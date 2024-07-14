#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char fileName[100];
    char str[100] = {'\0'};
    char buffer[1024] = {'\0'};
    int iRet = 0;

    printf("Enter the fileName:\n");
    scanf("%s",fileName);

    printf("Enter the string to write:\n");
    scanf(" %s",str);

    fd = open(fileName,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    iRet = write(fd,str,strlen(str));

    printf("%d bytes written to file\n",iRet);

    close(fd);

    return 0;
}
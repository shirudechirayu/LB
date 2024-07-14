#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int countWhite(char fileName[])
{
    int fd = 0;
    char buffer[1024] = {'\0'};
    int iRet = 0, iCnt = 0, i = 0;

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    while((iRet = read(fd,buffer,sizeof(buffer))) != 0)
    {
        for(i = 0; i < iRet; i++)
        {
            if(buffer[i] == ' ')
            {
                iCnt++;
            }
        }
    }

    close(fd);

    return iCnt;
}

int main()
{
    int fd = 0,iRet = 0;
    char fName[100];

    printf("Enter the fileName:\n");
    scanf("%s",fName);

    iRet = countWhite(fName);

    printf("Number of white spaces characters are %d",iRet);

    return 0;
}
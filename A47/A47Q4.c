#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int countChar(char fileName[],char character)
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
            if(buffer[i] == character)
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
    char fName[100], ch = '\0';

    printf("Enter the fileName:\n");
    scanf("%s",fName);

    printf("Enter the character to search:\n");
    scanf(" %c",&ch);

    iRet = countChar(fName,ch);

    printf("Frequency is %d",iRet);

    return 0;
}
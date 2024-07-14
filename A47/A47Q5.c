#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>

int displayN(char fileName[],int n)
{
    int fd = 0;
    char* buffer;
    int iRet = 0;

    buffer = (char*)malloc((n+1)*sizeof(char));

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }

    iRet = read(fd,buffer,n);

    fwrite(buffer,1,iRet,stdout);
    
    close(fd);
}

int main()
{
    int fd = 0,iCnt = 0,iRet = 0;
    char fName[100];

    printf("Enter the fileName:\n");
    scanf("%s",fName);

    printf("Enter the number of characters:\n");
    scanf(" %d",&iCnt);

    displayN(fName,iCnt);

    return 0;
}
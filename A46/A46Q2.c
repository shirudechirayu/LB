#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fileName[100];

    printf("Enter the fileName:\n");
    scanf("%s",fileName);

    fd = creat(fileName,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File created successfully\n");
    }

    close(fd);

    return 0;
}
#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    char fileName[100];

    printf("Enter the fileName:\n");
    scanf("%s",fileName);

    fd = open(fileName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File opened successfully\n");
    }

    close(fd);

    return 0;
}
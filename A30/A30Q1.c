#include<stdio.h>

void strNCatX(char* dest, char* src, int iNo)
{
    while(*dest != '\0')
    {
        dest++;
    }

    while(*src != '\0' && iNo != 0)
    {
        *dest = *src;
        src++;
        dest++;
        iNo--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];
    int iLength = 0;

    printf("Enter the first string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string:\n");
    scanf(" %[^'\n']s",brr);

    printf("Enter number of characters to concat:\n");
    scanf("%d",&iLength);

    strNCatX(arr,brr,iLength);

    printf("%s",arr);

    return 0;
}
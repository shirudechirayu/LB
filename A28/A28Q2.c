#include<stdio.h>

void strncpyX(char* dest, char* src, int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
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
    int iSize = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the size of destination string\n");
    scanf("%d",&iSize);

    strncpyX(brr,arr, iSize);

    printf("Destination string is: %s\n",brr);

    return 0;
}
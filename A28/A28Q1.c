#include<stdio.h>

void strcpyX(char* dest, char* src)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];

    printf("Enter the string: \n");
    scanf("%[^'\n']s",arr);

    strcpyX(brr,arr);

    printf("Destination string is: %s\n",brr);

    return 0;
}
#include<stdio.h>

void strCatX(char* dest, char* src)
{
    while(*dest != '\0')
    {
        dest++;
    }

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

    printf("Enter the first string: \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string: \n");
    scanf(" %[^'\n']s",brr);

    strCatX(brr,arr);

    printf("Destination string is: %s\n",brr);

    return 0;
}

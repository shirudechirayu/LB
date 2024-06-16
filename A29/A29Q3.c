#include<stdio.h>

void strCpyCap(char* src, char* dest)
{
    while(*src != '\0')
    {
        if(*src >= 'a' && *src <= 'z')
        {
            *dest = *src - 32;
        }
        else
        {
            *dest = *src;
        }
        dest++;
        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    strCpyCap(arr,brr);

    printf("%s",brr);

    return 0;
}
#include<stdio.h>

void strCpyX(char* src, char* dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
        {
            *dest = *src;
            dest++;
        }
        src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30], brr[30];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    strCpyX(arr,brr);

    printf("%s",brr);

    return 0;
}
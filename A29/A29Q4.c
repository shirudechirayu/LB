#include<stdio.h>

void strCpySmall(char* src, char* dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + 32;
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

    strCpySmall(arr,brr);

    printf("%s",brr);

    return 0;
}
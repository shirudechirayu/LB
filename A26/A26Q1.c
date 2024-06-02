#include<stdio.h>

void strlwrx(char* str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
            printf("%c",*str + 32);
        else
            printf("%c",*str);

        str++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    return 0;
}
#include<stdio.h>

void displayDigits(char* str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <='9')
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

    displayDigits(arr);

    return 0;
}
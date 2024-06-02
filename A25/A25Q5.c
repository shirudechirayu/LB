#include<stdio.h>

void reverse(char* str)
{
    int iLength = 0;

    while(*(str + iLength) != '\0')
    {
        iLength++;
    }

    iLength--;

    while(iLength >= 0)
    {
        printf("%c",*(str + iLength));
        iLength--;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    reverse(arr);

    return 0;
}
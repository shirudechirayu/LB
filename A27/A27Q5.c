#include<stdio.h>

void strRevX(char* str)
{
    int iLength = 0, i = 0;
    char temp = '\0';

    while(*(str + iLength) != '\0')
    {
        iLength++;
    }

    for(i = 0; i <= (iLength - 1) / 2; i++)
    {
        temp = str[i];
        str[i] = str[iLength - 1 - i];
        str[iLength - 1 - i] = temp;
    }
}

int main()
{
    char arr[20];

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    strRevX(arr);

    printf("Modified string is %s",arr);
    
    return 0;
}
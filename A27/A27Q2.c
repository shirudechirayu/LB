#include<stdio.h>

int countChar(char* str,char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
            iCount++;
        str++;
    }

    return iCount;
}

int main()
{
    char arr[20], cValue = '\0';
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    scanf("%*c");

    printf("Enter the character\n");
    scanf("%c",&cValue);

    iRet = countChar(arr,cValue);

    printf("Character frequency is %d",iRet);
    
    return 0;
}
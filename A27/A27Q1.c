#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkChar(char* str,char ch)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == ch)
            bFlag = TRUE;
        str++;
    }

    return bFlag;
}

int main()
{
    char arr[20], cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    scanf("%*c");

    printf("Enter the character\n");
    scanf("%c",&cValue);

    bRet = chkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkAlpha(char ch)
{
    if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        return TRUE;
    else
        return FALSE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = chkAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is character");
    }
    else
    {
        printf("It is not a character");
    }

    return 0;
}
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkSmall(char ch)
{
    if((ch >= 97 && ch <= 122))
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

    bRet = chkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("It is small case character");
    }
    else
    {
        printf("It is not a small case character");
    }

    return 0;
}
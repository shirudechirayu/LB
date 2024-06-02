#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkDigit(char ch)
{
    if((ch >= 48 && ch <= 57))
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

    bRet = chkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }

    return 0;
}
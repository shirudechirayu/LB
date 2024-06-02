#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkSpecial(char ch)
{
    if(ch == '!' || ch == '@' 
    || ch == '#' || ch == '$' 
    || ch == '%' || ch == '^' 
    || ch == '&' || ch == '*')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character:\n");
    scanf("%c",&cValue);

    bRet = chkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is a special chaacter\n");
    }
    else
    {
        printf("It is not a special chaacter\n");
    }

    return 0;
}
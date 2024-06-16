#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL strPallindrome(char* str)
{
    char* first = str;
    int iStart = 0, iEnd = 0;
    while(*str != '\0')   
    {
        str++;
        iEnd++;
    }

    str--;
    iEnd--;

    while(iStart < iEnd)
    {
        if(*first != *str)
            break;
        iStart++;
        iEnd--;
        first++;
        str--;
    }

    if(iStart >= iEnd)
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
    char arr[30];
    BOOL bRet = FALSE;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",arr);

    bRet = strPallindrome(arr);

    if(bRet == TRUE)
    {
        printf("String is Pallindrome\n");
    }
    else
    {
        printf("String is not Pallindrome\n");
    }

    return 0;
}
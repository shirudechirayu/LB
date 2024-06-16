#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL strCmpX(char* src, char* dest)
{
    while(*src != '\0' && *dest != '\0')
    {
        if(*src != *dest)
            break;
        src++;
        dest++;
    }

    if(*src == '\0' && *dest == '\0')
        return TRUE;
    else
        return FALSE;
}

int main()
{
    char arr[30], brr[30];
    BOOL bRet = FALSE;

    printf("Enter the first string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string:\n");
    scanf(" %[^'\n']s",brr);

    bRet = strCmpX(arr,brr);

    if(bRet == TRUE)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are different\n");
    }

    return 0;
}
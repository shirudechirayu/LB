#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL strCmpX(char* src, char* dest, int iNo)
{
    while(*src != '\0' && *dest != '\0' && iNo != 0)
    {
        if(*src != *dest)
            break;
        src++;
        dest++;
        iNo--;
    }

    if((*src == '\0' && *dest == '\0') || iNo == 0)
        return TRUE;
    else
        return FALSE;
}

int main()
{
    char arr[30], brr[30];
    BOOL bRet = FALSE;
    int iLength = 0;

    printf("Enter the first string:\n");
    scanf("%[^'\n']s",arr);

    printf("Enter the second string:\n");
    scanf(" %[^'\n']s",brr);

    printf("Enter number of characters to compare:\n");
    scanf("%d",&iLength);

    bRet = strCmpX(arr,brr,iLength);

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
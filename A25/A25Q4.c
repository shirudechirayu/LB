#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL chkVowel(char* str)
{
    BOOL bFlag = FALSE;

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'e' || 
        *str == 'i' || *str == 'o' || 
        *str == 'u' || *str == 'A' || 
        *str == 'E' || *str == 'I' || 
        *str == 'O' || *str == 'U')
        {
            bFlag = TRUE;
            break;
        }

        str++;
    }

    return bFlag;
}

int main()
{
    char arr[20];
    BOOL bRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    bRet = chkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
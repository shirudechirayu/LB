#include<stdio.h>

int firstChar(char* str,char ch)
{
    int index = -1, iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            index = iCnt;
            break;
        }

        iCnt++;
        str++;
    }

    return index;
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

    iRet = firstChar(arr,cValue);

    printf("Character location is %d",iRet);
    
    return 0;
}
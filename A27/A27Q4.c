#include<stdio.h>

int lastChar(char* str,char ch)
{
    int index = -1, iLength = 0;

    while(*(str + iLength) != '\0')
    {
        iLength++;
    }

    iLength--;

    while(iLength >= 0)
    {
        if(*(str + iLength) == ch)
        {
            index = iLength;
            break;
        }
        iLength--;
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

    iRet = lastChar(arr,cValue);

    printf("Character location is %d",iRet);
    
    return 0;
}
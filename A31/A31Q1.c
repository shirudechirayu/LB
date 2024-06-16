#include<stdio.h>

int wordCount(char* str)
{
    int iCnt = 0;
    if(str == NULL)
    {
        return -1;
    }

    if(*str == '\0')
    {
        return 0;
    }

    while(*str != '\0')
    {
        while(*str != '\0' && *str == ' ')
        {
            str++;
        }

        if(*str != ' ' && *str != '\0')
        {
            iCnt++;
        }
            
        
        while(*str != ' ' && *str != '\0')
        {
            str++;
        }
    }

    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]",arr);

    iRet = wordCount(arr);

    printf("%d\n",iRet);

    return 0;
}
#include<stdio.h>

int countSmall(char* str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
            iCnt++;

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = countSmall(arr);

    printf("%d\n",iRet);

    return 0;
}
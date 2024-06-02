#include<stdio.h>

int countSmall(char* str)
{
    int iCnt1 = 0, iCnt2 = 0;

    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
            iCnt1++;
        else if(*str >= 'A' && *str <= 'Z')
            iCnt2++;

        str++;
    }

    return iCnt1 - iCnt2;
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
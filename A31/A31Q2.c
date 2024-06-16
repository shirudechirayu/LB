#include<stdio.h>

int wordCount(char* str)
{
    int iMax = 0;
    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        while(*str != '\0' && *str == ' ')
        {
            str++;
        }

        int iLength = 0;
        while(*str != ' ' && *str != '\0')
        {
            iLength++;
            str++;
        }

        iMax = iMax < iLength ? iLength : iMax;
    }

    return iMax;
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

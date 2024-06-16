#include<stdio.h>

void strWrdRev(char* str)
{
    int i = 0;
    char temp = '\0';

    if(str == NULL)
        return;

    while(*str != '\0')
    {
        while(*str != '\0' && *str == ' ')
        {
            str++;
        }

        int iLength = 0;
        char* sptr = str;
        while(*str != ' ' && *str != '\0')
        {
            str++;
            iLength++;
        }

        for(i = 0; i < iLength / 2; i++)
        {
            temp = *(sptr + i);
            *(sptr + i) = *(str - 1 - i);
            *(str -1 -i) = temp;
        }

    }
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^\n]",arr);

    strWrdRev(arr);

    printf("%s\n",arr);

    return 0;
}

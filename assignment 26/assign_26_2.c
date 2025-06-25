#include <stdio.h>

int CountChar(char *str, char ch)
{
    int iCount = 0;
    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }
    return iCount++;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    int iRet = 0;

    printf("enter your string\n");
    scanf(" %[^\n]", arr);

    printf("enter the character you want to search\n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr,cValue);

    printf("%d",iRet);

    return 0;
}
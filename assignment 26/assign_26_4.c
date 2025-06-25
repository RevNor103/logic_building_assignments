#include <stdio.h>

void LastChar(char *str, char ch)
{
    int iCount = 0, iCnt = 0, iLast = 0;
    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iLast = iCnt;
        }
        iCnt++;
    }
    printf("%d",iLast);
}

int main()
{
    char arr[50];
    char cValue = '\0';

    printf("enter your string\n");
    scanf(" %[^\n]", arr);

    printf("enter the character you want to search\n");
    scanf(" %c",&cValue);

    LastChar(arr,cValue);

    return 0;
}
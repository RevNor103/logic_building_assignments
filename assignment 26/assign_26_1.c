#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }
    return FALSE;
}

int main()
{
    char arr[50];
    char cValue = '\0';
    bool bRet = FALSE;

    printf("enter your string\n");
    scanf(" %[^\n]", arr);

    printf("enter the character you want to search\n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet == TRUE)
    {
        printf("is present\n");
    }
    else
    {
        printf("not present\n");
    }

    return 0;
}
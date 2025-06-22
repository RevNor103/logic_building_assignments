#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkDigit(int ch)
{
    if((ch >= '0') && (ch <= '9'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = FALSE;

    printf("enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("is number\n");
    }
    else
    {
        printf("not number");
    }

    return 0;
}
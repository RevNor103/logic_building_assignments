#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkCapital(int ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("is capital\n");
    }
    else
    {
        printf("not capital");
    }

    return 0;
}
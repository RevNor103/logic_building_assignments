#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkSmall(int ch)
{
    if((ch >= 'a') && (ch <= 'z'))
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

    bRet = ChkSmall(cValue);

    if(bRet == TRUE)
    {
        printf("is small\n");
    }
    else
    {
        printf("not small\n");
    }

    return 0;
}
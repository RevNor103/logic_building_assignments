#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool CheckAlpha(char ch)
{
    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z')) 
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

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("is character\n");
    }
    else
    {
        printf("not character\n");
    }

    return 0;
}
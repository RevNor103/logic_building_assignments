#include <stdio.h>

void StrCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
    *dest = '\0';
}

int main()
{
    char arr[30] = "marvelous multi OS";
    char brr[30];

    StrCpyX(arr,brr,10);

    printf("%s",brr);

    return 0;
}
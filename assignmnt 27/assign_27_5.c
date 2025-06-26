#include <stdio.h>

void StrCpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        src++;
    }

    while (*dest != '\0')
    {
        *src = *dest;
        src++;
        dest++;
    }
    
    *src = '\0';
}

int main()
{
    char arr[30] = "Marvelous multi OS";
    char brr[30] = " Logic Building";

    StrCpyX(arr,brr);

    printf("%s",arr);

    return 0;
}
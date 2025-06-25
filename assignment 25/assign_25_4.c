#include <stdio.h>

void Display(char *str)
{
    int iCnt = 0;
    while(str[iCnt] != '\0')  // Always use '\0' for end of string
    {
        if((str[iCnt] >= '0') && (str[iCnt] <= '9'))
        {
            printf("%c", str[iCnt]);
        }
        iCnt++;
    }
    printf("\n");
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter your string:\n");
    scanf(" %[^\n]", arr);  // Corrected here

    Display(arr);

    return 0;
}

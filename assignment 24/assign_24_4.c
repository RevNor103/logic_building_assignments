#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool ChkVowel(char *str)
{
    int iCnt = 0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == 'a' || str[iCnt] == 'e' || str[iCnt] == 'i' ||
           str[iCnt] == 'o' || str[iCnt] == 'u' ||
           str[iCnt] == 'A' || str[iCnt] == 'E' || str[iCnt] == 'I' ||
           str[iCnt] == 'O' || str[iCnt] == 'U')
        {
            return TRUE;
        }
        iCnt++;
    }
    return FALSE;   
}

int main()
{
    char arr[50];
    bool bRet = FALSE;

    printf("Enter your string: \n");
    scanf(" %[^\n]", arr);  // Corrected input

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Vowel is present\n");
    }
    else
    {
        printf("Vowel is not present\n");
    }

    return 0;
}

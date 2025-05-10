#include<stdio.h>

char ConvertCase(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        // Convert uppercase to lowercase
        return ch + 32;
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        // Convert lowercase to uppercase
        return ch - 32;
    }
    else
    {
        // Return same character if not a letter
        return ch;
    }
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';
    
    printf("Enter character: ");
    scanf("%c", &cValue);
    
    cRet = ConvertCase(cValue);
    
    printf("Converted character is: %c\n", cRet);
    
    return 0;
}

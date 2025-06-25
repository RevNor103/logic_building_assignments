#include <stdio.h>

void Display(char ch)
{
    printf("decimal is : %d\n",ch);
    printf("octal is : %o\n",ch);
    printf("hexadecimal is : %x\n",ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}
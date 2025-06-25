#include <stdio.h>

void strwrX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[50];

    printf("enter the string \n");
    scanf(" %[^'\n']s",arr);

    strwrX(arr);

    printf("%s",arr);

    return 0;
}
#include <stdio.h>

void Reverse(char *str)
{
    char temp = '\0';
    char *start = NULL;
    char *end = NULL;

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start <= end)
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
    char arr[50] = {'\0'};

    printf("enter your string\n");
    scanf(" %[^'\n']s",arr);

    Reverse(arr);

    printf("string after reversal : %s\n",arr);

    return 0;
}
#include <stdio.h>

void DisplaySchedule(int ch)
{
    if((ch == 'a') || (ch == 'A'))
    {
        printf("your exam is at 7 Am \n");
    }
    else if((ch == 'b') || (ch == 'B'))
    {
        printf("your exam is at 8.30 AM \n");
    }
    else if((ch == 'c') || (ch == 'C'))
    {
        printf("your exam is at 9.20 AM\n");
    }
    else if((ch == 'd') || (ch == 'D'))
    {
        printf("your exam is at 10.30 AM");
    }
    else 
    {
        printf("invalid input");
    }
}

int main()
{
    char cValue = '\0';

    printf("enter the character : \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}
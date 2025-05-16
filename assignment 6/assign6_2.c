#include <stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo < 0 || iNo > 9)
    {
        printf("enter valid number between 0-9\n");
        return;
    }

    switch(iNo)
    {
        case 0: printf("zero\n"); break;
        case 1: printf("one\n"); break;
        case 2: printf("two\n"); break;
        case 3: printf("three\n"); break;
        case 4: printf("four\n"); break;
        case 5: printf("five\n"); break;
        case 6: printf("six\n"); break;
        case 7: printf("seven\n"); break;
        case 8: printf("eight\n"); break;
        case 9: printf("nine\n"); break;
    }
}

int main()
{
    int iValue = 0;

    printf("enter ypur value here\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
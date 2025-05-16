#include <stdio.h>

void Display(int iNo)
{
    int iStr = 0;
    int iHsh = 0;

    for(iStr = 1; iStr <= iNo; iStr++)
    {
        printf("* ");
    }
    for(iHsh = 1; iHsh <= iNo; iHsh++)
    {
        printf("# ");
    }
}

int main()
{
    int iValue = 0;

    printf("enter your number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
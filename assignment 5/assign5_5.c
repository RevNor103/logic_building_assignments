#include <stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 1;

    if(iNo == 0)
    {
        printf("Invalid Input\n");
        return;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf(" %d",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("enter your number here \n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}
#include <stdio.h>

int Display(int iNo, int iFreq)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iFreq; iCnt++)
    {
        printf("%d",iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Your Number\n");
    scanf("%d",&iValue);

    printf("Enter your freq\n");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}
#include <stdio.h>

int DollarToINR(int iNo)
{
    iNo = iNo * 70;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter your number here\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("%d",iRet);

    return 0;
}
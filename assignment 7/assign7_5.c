#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 1;
    int iNonFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt > 0; iCnt--)
    {
        if((iCnt % 2) == 0)
        {
            iFact = iFact * iCnt;
        }

        if((iCnt % 2) != 0)
        {
            iNonFact = iNonFact * iCnt;
        }

    }
    return iFact - iNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter your value here\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    return 0;
}
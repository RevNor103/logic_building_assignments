#include <stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    int iNonFact = 0;
    int iDiff = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iFact = iFact + iCnt;
        }
        else
        {
            iNonFact = iNonFact + iCnt;
        }
    }

    iDiff = iFact - iNonFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("enter your number here\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("you difference is %d",iRet);

    return 0;
}
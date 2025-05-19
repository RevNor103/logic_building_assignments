#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0;
    int iFreq = 1;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 0)
        {
            iDigit = 1;
        }

        iFreq  = iFreq * iDigit;
        iNo = iNo / 10;
    }
    return iFreq;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
 
    printf("enter number");
    scanf("%d",&iValue);

    iRet=MultDigits(iValue);
 
    printf("%d",iRet);
 
    return 0;
}
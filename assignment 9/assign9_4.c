#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iFreq = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
        {
            iFreq  = iFreq + 1;
        }
        iNo = iNo / 10;
    }

    return iFreq ;
}

int main()
{
    int iValue =0;
    int iRet = 0;
 
    printf("enter number");
    scanf("%d",&iValue);

    iRet= CountFour(iValue);
 
    printf("%d",iRet);
 
    return 0;
}
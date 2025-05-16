#include <stdio.h>

int KMtoMeter(int iNo)
{
    iNo = iNo * 1000;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("enter your distance in KM\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);

    return 0;
}
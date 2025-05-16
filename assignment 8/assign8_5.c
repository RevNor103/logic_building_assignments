#include <stdio.h>

double SquareMeter(int iNo)
{
    double dSq = 0.0;
    dSq = iNo * 0.0929;

    return dSq;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;


    printf("enter your area in square feet\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("area in square meter is %lf",dRet);

    return 0;
}
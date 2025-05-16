#include <stdio.h>

float FhtoCs(float fTemp)
{
    double dCel = 0.0;
    dCel = (fTemp - 32) * (5.0/9.0);

    return dCel;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;


    printf("enter your temp in fahreneit\n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("temp in celcius is %lf",dRet);

    return 0;
}
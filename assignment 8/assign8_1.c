#include <stdio.h>

double CircleArea(float fRadius)
{
    float fPi = 3.14;
    double dArea = 0;

    dArea = fPi * fRadius * fRadius;
    
    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("enter the radius\n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("your area is %lf\n",dRet);

    return 0;
}
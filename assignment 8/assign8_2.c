#include <stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double dArea = 0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main ()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("enter the width\n");
    scanf("%f",&fValue1);

    printf("enter the height\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf ("your area is %lf",dRet);

    return 0;
}
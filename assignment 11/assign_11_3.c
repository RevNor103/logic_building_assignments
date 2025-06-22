#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
    printf("\n");
    
}

int main()
{
    int iValue = 0;

    printf("enter the no fo elements\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
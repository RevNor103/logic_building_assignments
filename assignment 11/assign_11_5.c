#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0, iTable = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iTable = 2*iCnt;
        printf("%d\t",iTable);
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
#include <stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ",iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("enter your number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}
#include <stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    char iCh = 'A';

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf(" %c\t",iCh);
        iCh++;
    }
    printf("\n");

}

int main()
{
    int iValue = 0;

    printf("enter the number of elements \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}
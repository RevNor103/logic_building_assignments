#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 1;

    for(i = 1; i <= iRow; i++)
    {
        iNum = i;
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t",iNum);
            iNum++;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter rows and cols : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);


    return 0;
}
#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 2;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j < iCol; j++)
        {
            printf("%d\t",iNum);
            iNum++;
            if(iNum > 10)
            {
                iNum = 1;
            }
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
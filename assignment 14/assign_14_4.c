#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum1 = 1, iNum2 = -1;

    for(i = 0; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i % 2 == 0)
            {
                printf("%d\t",iNum1);
                iNum1++;
            }
            
            else
            {
                printf("%d\t",iNum2);
                iNum2--;
            }
        }
        iNum1 = 1;
        iNum2 = -1;
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
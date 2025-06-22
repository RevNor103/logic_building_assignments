#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 1;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t",iNum);
        }
        iNum++;
        printf("\n");
    }
    


}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter the num of rows : \n");
    scanf("%d",&iValue1);
    
    printf("enter the num of cols : \n");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}
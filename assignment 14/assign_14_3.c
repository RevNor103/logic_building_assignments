#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNum = 1;
    char iCh = 'a';

    for(i = 0; i <= iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i % 2 == 1)
            {
                printf("%d\t",iNum);
                iNum++;
            }
            
            else
            {
                printf("%c\t",iCh);
                iCh++;
            }
        }
        iNum = 1;
        iCh = 'a';
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
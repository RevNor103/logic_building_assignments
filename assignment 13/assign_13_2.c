#include <stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char iCh1 = 'A';
    char iCh2 = 'a';

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i % 2 == 0)
            {
                iCh1 = 'A';
                printf("%c\t",iCh1);
                iCh1++;
            }
            else
            {
                iCh2 = 'a';
                printf("%C\t",iCh2);
                iCh2++;
            }
        }
        printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("enter the rows and cols : \n");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}
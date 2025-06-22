#include <stdio.h>
#include <stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iDigit = 0, iNum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNum = Arr[iCnt];
        iDigit = 0;

        if(iNum < 0)
        {
            iNum = -iNum;
        }
        
        if(iNum == 0)
        {
            iDigit = 1;
        }

        while(iNum != 0)
        {
            iNum = iNum / 10;
            iDigit++;
        }
        if(iDigit == 3)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iCnt = 0, iSize = 0;
    int *p = NULL;

    printf("enter the no of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));
    if(p == NULL)
    {
        printf("unable to allocate size");
    }

    printf("enter the elements \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter elemnt %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Digits(p, iSize);

    free(p);

    return 0;
}
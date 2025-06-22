#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt = 0, iEven = 0, iOdd = 0, iDiff = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iEven++;
        }
        else
        {
            iOdd++;
        }
    }

    iDiff = iEven - iOdd;

    return iDiff;
}

int main ()
{
    int iCnt = 0, iSize = 0, iRet = 0;
    int *p = NULL;

    printf("enter the no of elements : \n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory \n");
        return -1;
    }

    printf("enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("enter element  %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p, iSize);

    printf("result is : %d",iRet);

    free(p);

    return 0;
}
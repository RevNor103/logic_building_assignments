#include <stdio.h>
#include <stdlib.h>

int Range(int Arr[], int iLength, int iNum, int iStart, int iEnd)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] > iStart) && (Arr[iCnt] < iEnd))
        {
            printf("elements in range are : %d\n",Arr[iCnt]);
        }
    }
}

int main ()
{
    int iCnt = 0, iSize = 0, iValue1 = 0, iValue2 = 0, iNo = 0;
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

    printf("\n");

    printf("enter the range :\n");
    scanf("%d %d",&iValue1, &iValue2);

    Range(p, iSize, iNo, iValue1, iValue2);

    free(p);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int Freq(int Arr[], int iLength)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
    }

    return iFreq;
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

    iRet = Freq(p, iSize);

    printf("frequency is : %d",iRet);

    free(p);

    return 0;
}
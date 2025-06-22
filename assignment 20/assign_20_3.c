#include <stdio.h>
#include <stdlib.h>

int LastOcc(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = iLength; iCnt >= 0; iCnt--)
    {
        if(Arr[iCnt] == iNum)
        {
            return iCnt;
        }
    }
    return -1;
}

int main ()
{
    int iCnt = 0, iSize = 0, iNo = 0, iRet = 0;
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

    printf("enter the number you want to search :\n");
    scanf("%d",&iNo);

    iRet = LastOcc(p, iSize, iNo);

    printf("%d",iRet);

    free(p);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool Freq(int Arr[], int iLength, int iNum)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNum)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main ()
{
    int iCnt = 0, iSize = 0, iNo = 0;
    bool bRet = FALSE;
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

    bRet = Freq(p, iSize, iNo);

    if(bRet == 1)
    {
        printf("number %d is present\n",iNo);
    }
    else if(bRet == 0)
    {
        printf("number %d is not present\n",iNo);
    }

    free(p);

    return 0;
}
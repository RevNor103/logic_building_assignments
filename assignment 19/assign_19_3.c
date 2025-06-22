#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int bool;

bool CountEven(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}

int main ()
{
    int iCnt = 0, iSize = 0;
    bool iRet = FALSE;
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

    if(iRet == 1)
    {
        printf("element 11 is present \n");
    }
    else if(iRet == 0)
    {
        printf("element 11 is not present \n");
    }

    free(p);

    return 0;
}
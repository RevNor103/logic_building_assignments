#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0, iCount1 = 0, iCount2 = 0, iDiff = 0;

    if(str[0] == '\0')
    {
        printf("empty");
        return -1;
    }

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            iCount1++;
        }
        else if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            iCount2++;
        }
        iCnt++;
    }
    iDiff = iCount1 - iCount2;

    return iDiff;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("enter the string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);
    printf("Difference in count is %d ",iRet);

    return 0;
}
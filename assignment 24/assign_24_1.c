#include <stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0, iCount = 0;

    if(str[0] == '\0')
    {
        printf("empty");
        return -1;
    }

    while(str[iCnt] != '\0')
    {
        if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
}

int main()
{
    char arr[50];
    int iRet = 0;

    printf("enter the string :\n");
    scanf("%[^'\n']s",arr);

    iRet = CountCapital(arr);
    printf("number of capital count is %d ",iRet);

    return 0;
}
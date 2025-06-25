#include <stdio.h>

int Display(char *str)
{
    int iCnt = 0, iCount = 0;
    while(str[iCnt] != '\0')  
    {
        if(str[iCnt] == ' ')
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
}

int main()
{
    char arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter your string:\n");
    scanf(" %[^\n]", arr);  

    iRet = Display(arr);
    printf("%d",iRet);

    return 0;
}

#include <stdio.h>

void strlwrx(char *str)
{
    int iCnt = 0;
    while(str[iCnt] != 0)
    {
        if((str[iCnt] >= 'A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt]= str[iCnt] + 32;
        }
        iCnt++;
    }

}

int main()
{
    char arr[50] = {'\0'};

    printf("enter your string\n");
    scanf("%[^'\n']s",arr);

    strlwrx(arr);

    printf("your modified string is : %s\n",arr);

    return 0;
}
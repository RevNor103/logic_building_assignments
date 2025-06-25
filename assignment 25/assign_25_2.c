#include <stdio.h>

void struprx(char *str)
{
    int iCnt = 0;
    while(str[iCnt] != 0)
    {
        if((str[iCnt] >= 'a') && (str[iCnt] <= 'z'))
        {
            str[iCnt]= str[iCnt] - 32;
        }
        iCnt++;
    }

}

int main()
{
    char arr[50] = {'\0'};

    printf("enter your string\n");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("your modified string is : %s\n",arr);

    return 0;
}
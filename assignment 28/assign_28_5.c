#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main()
{  
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};
    int fd = 0, iRet = 0;

    printf("enter the file you want to read\n");
    scanf("%s",Fname);

    printf("enter the string you want to put \n");
    scanf(" %[^\n]",Buffer);

    fd = open(Fname, O_RDWR);
    if(fd == -1)
    {
        printf("unable to open the file \n");
        return -1;
    }
    else
    {
        iRet = write(fd, Buffer, strlen(Buffer));
        
        close(fd);
    }

    return 0;
}
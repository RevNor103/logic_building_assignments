#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

int main()
{  
    char Fname[20] = {'\0'};
    char Buffer[50] = {'\0'};
    int fd = 0, iRet = 0;

    printf("enter the file you want to read\n");
    scanf("%s",Fname);

    fd = open(Fname, O_RDONLY);
    if(fd == -1)
    {
        printf("unable to open the file \n");
        return -1;
    }
    else
    {
        iRet = read(fd, Buffer, BUFFER_SIZE);

        printf("contents of file is \n %s",Buffer);
        
        close(fd);
    }

    return 0;
}
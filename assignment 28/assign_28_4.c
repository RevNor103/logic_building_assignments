#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0, iRet = 0, iSum = 0;
    char Buffer[50] = {'\0'};

    printf("enter the name of the file \n");
    scanf("%s",Fname);

    fd = open(Fname , O_RDWR);
    if(fd == -1)
    {
        printf("unable to open the file\n");
    }
    else
    {
        printf("file opened successfully %d\n",fd);
        while((iRet = read(fd,Buffer,BUFFER_SIZE)) != 0)
        {
            iSum = iSum + iRet;
        }
        printf("size of file is %d",iSum);
    }


    return 0;
}
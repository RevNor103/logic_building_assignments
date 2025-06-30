#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    char Fname[20] = {'\0'};
    int fd = 0;

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
        close(fd);
    }


    return 0;
}
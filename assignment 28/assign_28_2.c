#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main()
{   
    char Fname[20] = {'\0'};
    int fd = 0;

    printf("enter the name of file you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname, 0777);

    return 0;
}
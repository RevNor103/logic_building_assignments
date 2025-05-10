//1.Write a program which accept one number from user and print that number of even numbers on screen.

//Input: 7

//Output:

//2 4 6 8 10 12 14
#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;
    int iEven = 2;
    
    if(iNo <= 0)
    {
        printf("Please enter positive number\n");
        return;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iEven);
        iEven = iEven + 2;
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}
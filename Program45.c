// Accept one number from user and print that number of even number on screen.

#include<stdio.h>

void DisplayEven(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEven(iValue);

    return 0;
}
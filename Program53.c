// write a program which accept number from user and print till that number.

#include<stdio.h>

void PrintNumber(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d \n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    PrintNumber(iValue);

    return 0;
}
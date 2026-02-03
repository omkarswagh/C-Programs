// write a program which accept number from user and print numberline of that number.

#include<stdio.h>

void PrintNumberLine(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d \t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    PrintNumberLine(iValue);

    return 0;
}
// write a program which accept number from user and print First 5 multiple of that number.
// input : 4  output : 4   8  12  16  20


#include<stdio.h>

void PrintMultiple(int iNo)
{
    int iCnt = 0, iMulti = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("%d \t",iMulti);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    PrintMultiple(iValue);

    return 0;
}
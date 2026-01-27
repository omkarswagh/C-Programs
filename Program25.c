// Write a program that accepts an integer from the user and displays all its factors (excluding the number itself).

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue  = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}
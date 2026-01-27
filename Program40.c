// Display only even factor

#include<stdio.h>

void DisplayEvenFactors(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    printf("Even factors are : \n");
    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if(((iNo % iCnt) == 0)  && (iCnt % 2) == 0)
        {
            printf("%d \t",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEvenFactors(iValue);

    return 0;
}
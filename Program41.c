// Display only even Digit

#include<stdio.h>

void DisplayEvenDigit(int iNo)
{
    int iDigit = 0;

    printf("Even Digit are : \n");
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            printf("%d\n",iDigit);
        }
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    DisplayEvenDigit(iValue);

    return 0;
}
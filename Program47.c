// Accept one number from user and print multiplication of factors

#include<stdio.h>

long int DisplayFactorMultiplication(int iNo)
{
    int iCnt = 0;
    long int iMultiplication = 1;

    if(iNo <= 0)
    {
        return -1;
    }

    for(iCnt = 1; iCnt <= iNo/2; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMultiplication = iMultiplication * iCnt;
        }
    }
    return iMultiplication;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter the Number  : \n");
    scanf("%d",&iValue);

    iRet = DisplayFactorMultiplication(iValue);

    printf("Factor Multiplication is : %d",iRet);

    return 0;
}

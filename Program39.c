// Accept Number from user and addition of digits
// Input : 7521
// Output : 15

#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iSum = iSum + iDigit;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet = SumDigits(iValue);

    printf("Addition of digits are : %d\n",iRet);

    return 0;
}
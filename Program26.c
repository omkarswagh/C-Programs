// Program to divide two numbers

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iDivision = 0;
    iDivision = iNo1 / iNo2;
    return iDivision;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the First Number  : \n");
    scanf("%d",&iValue1);

    printf("Enter the Second Number  : \n");
    scanf("%d",&iValue2);

    iRet = Divide(iValue1,iValue2);
    printf("Division is : %d",iRet);

    return 0;
}
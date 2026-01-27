// Problem Statement : Accept 2 values from user and perform the addition.

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue1);

    printf("Enter the Number : \n");
    scanf("%d",&iValue2);

    iRet = Addition(iValue1, iValue2);

    printf("Addition is : %d",iRet);

    return 0;
}
// Accept one number from user and return sumation of all non Factors

#include<stdio.h>

int SummationNonFactor(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
          iSum = iSum + iCnt;  
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number  : \n");
    scanf("%d",&iValue);

    iRet = SummationNonFactor(iValue);
    printf("Summation of All non Factors are : %d",iRet);
    return 0;
}

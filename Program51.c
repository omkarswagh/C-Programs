//calculate the difference between the Sum of Factors and the Sum of Non-Factors

#include<stdio.h>

int FactorAnalyzer(int iNo)
{
    int iCnt = 0, iSumFactor = 0, iSumNonFactor = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
       if((iNo % iCnt) == 0)
        {
          iSumFactor = iSumFactor + iCnt;  
        }
        else
        {
            iSumNonFactor = iSumNonFactor +iCnt;
        }
    }

    return iSumNonFactor - iSumFactor;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the Number  : \n");
    scanf("%d",&iValue);

    iRet = FactorAnalyzer(iValue);

    printf("Difference of All non Factors and Factor are : %d",iRet);
    return 0;
}

// Problem Statement : Accept value from user and Check number is Even or Odd.

#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number to check Numebr is Even or Odd \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even Number \n",iValue);
    }
    else
    {
        printf("%d is Odd Number \n",iValue);
    }

    return 0;
}

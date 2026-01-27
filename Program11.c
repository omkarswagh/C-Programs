// Find Minimum

#include<stdio.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo2;
    }
    else
    {
        return iNo1;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iRet = Minimum(iValue1, iValue2);

    printf("Minimum Number is : %d",iRet);

    return 0;
}
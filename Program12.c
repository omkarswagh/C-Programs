// Calculate Average

#include<stdio.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAvg = ((float)(iNo1 +iNo2 + iNo3) / 3);
    return fAvg;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;
    float fRet = 0.0f;

    printf("Enter First Number  : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number  : \n");
    scanf("%d",&iValue2);

    printf("Enter Third Number  : \n");
    scanf("%d",&iValue3);

    fRet = Average(iValue1,iValue2,iValue3);

    printf("Average is : %0.2f",fRet);

    return 0;
}
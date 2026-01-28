// Accept two number from user and display first number in second number of time.

#include<stdio.h>

void Display(int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        printf("%d\n",iNo1);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}
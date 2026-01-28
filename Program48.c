
// Accept one number from user and display factors in Decreasing order

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = iNo/2; iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
          printf("%d \t",iCnt);  
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number  : \n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}

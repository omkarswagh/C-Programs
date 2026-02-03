// Accept number from user and print small is number is less than 50 print small , less than 100 medium , greater than 100 print large

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 50)
    {
        printf("Number is Small\n");
    }
    else if(iNo < 100)
    {
        printf("Number is Medium\n");
    }
    else if(iNo >= 100 )
    {
        printf("Number is Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
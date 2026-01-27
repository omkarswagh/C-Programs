// Accept one number from user and check it is divisible by 5 or not

#include<stdio.h>
#include<stdbool.h>

bool Display(int iNo)
{
        if((iNo % 5) == 0)
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

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

    bRet = Display(iValue);

    if(bRet == true)
    {
        printf("%d : is divisible by 5",iValue);
    }
    else
    {
        printf("%d : is Not Divisible by 5",iValue);
    }

    return 0;
}
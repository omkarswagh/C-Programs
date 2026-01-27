// Problem Statement : Accept value from user and calculate the cube.

#include<stdio.h>

int CalculateCube(int iNo)
{
    long int iCube = iNo * iNo * iNo;
    return iCube;
}

int main()
{
    int iValue = 0;
    long int iRet = 0;

    printf("Enter the Value to calculate Cube : \n");
    scanf("%d",&iValue);

    iRet = CalculateCube(iValue);
    printf("%d Cube is : %ld",iValue,iRet);

    return 0;
}

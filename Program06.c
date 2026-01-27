// Problem Statement : Calculate Percentage

#include<stdio.h>

float CalculatePercentage(int iTotal, float fMarks)
{
    float fPercentage = 0.0f;
    if(iTotal < fMarks || iTotal < 0 || fMarks < 0)
    {
        printf("Invalide Input\n");
        return fPercentage;
    }

    fPercentage = ((fMarks / (float)iTotal) * 100);
    return fPercentage;
}

int main()
{
    int iTotalMarks = 0;
    float fObtainedMarks = 0.0f;
    float fRet = 0.0f;

    printf("Enter Total Marks : \n");
    scanf("%d",&iTotalMarks);

    printf("Enter Your Obtained Marks : \n");
    scanf("%f",&fObtainedMarks);

    fRet = CalculatePercentage(iTotalMarks, fObtainedMarks);
    
    printf("Percentage is : %0.2f%%",fRet);
    return 0;
}


// sir code 17 
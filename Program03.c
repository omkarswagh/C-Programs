// Problem Statement : Accept radius from user and calculate the area of circle

#include<stdio.h>

float CalaculateArea(float fRadi)
{
    float const PI = 3.14f;
    float fArea = 0.0f;
    fArea = PI * fRadi * fRadi;
    return fArea;
}

int main()
{
    float fRadius = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Value of Radius : \n");
    scanf("%f",&fRadius);

    fRet = CalaculateArea(fRadius);

    printf("Area of Circle : %0.2f",fRet);

    return 0;
}
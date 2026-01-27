/*
    Write a program that accepts a student’s percentage marks (a floating-point value between 0 and 100) 
    from the user and displays the result as a class description based on the following criteria:

    If percentage is between 0.0 and less than 35.0, display “You are fail..”.

    If percentage is between 35.0 and less than 50.0, display “Your class is Pass class”.

    If percentage is between 50.0 and less than 60.0, display “Your class is Second class”.

    If percentage is between 60.0 and less than 75.0, display “Your class is First class”.

    If percentage is between 75.0 and 100.0 (inclusive), display “Your class is First with Distinction”.

*/

// sir code till 20

#include<stdio.h>

void DisplayClass(float fObtainedMarks)
{
    if(fObtainedMarks < 0 || fObtainedMarks > 100)
    {
        printf("Invalide Input\n");
    }

    if(fObtainedMarks >= 0 && fObtainedMarks < 35)
    {
        printf("You are Fail...");
    }
    else if(fObtainedMarks >= 35 && fObtainedMarks < 50)
    {
        printf("Your class is Pass Class...\n");
    }
    else if(fObtainedMarks >= 50 && fObtainedMarks < 60)
    {
        printf("Your class is Second Class...\n");
    }
    else if(fObtainedMarks >= 60 && fObtainedMarks < 75)
    {
        printf("Your class is Firts Class...\n");
    }
    else if(fObtainedMarks >= 75 && fObtainedMarks <= 100)
    {
        printf("Your class is Firts Class with Distictions...\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Your Marks : \n");
    scanf("%f",&fMarks);

    DisplayClass(fMarks);

    return 0;
}
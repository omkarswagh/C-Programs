
// Write a program that accepts the standard (class) number of a student as input 
// and displays the exam time according to the following schedule:

// | Standard | Exam Time   |
// |----------|-------------|
// | 1        | 8 AM        |
// | 2        | 9 AM        |
// | 3        | 10 AM       |
// | 4        | 11 AM       |
// | 5        | 12 NOON     |

#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard == 1)
    {
        printf("Your Exam at 8AM...\n");
    }
    else if(iStandard == 2)
    {
        printf("Your Exam at 9AM...\n");
    }
    else if(iStandard == 3)
    {
        printf("Your Exam at 10AM...\n");
    }
    else if(iStandard == 4)
    {
        printf("Your Exam at 11AM...\n");
    }
    else if(iStandard == 5)
    {
        printf("Your Exam at 12PM...\n");
    }
    else
    {
        printf("Invalid Input\n");
    }

}

int main()
{
    int iClass = 0;

    printf("Enter your Class : \n");
    scanf("%d",&iClass);

    DisplayExamTime(iClass);

    return 0;
}

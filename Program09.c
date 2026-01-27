
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

void DisplayClass(int iStandard)
{
    switch(iStandard)
    {
        case 1:
        printf("Your Exam At 8AM...\n");
        break;

        case 2:
        printf("Your Exam At 9AM...\n");
        break;
        
        case 3:
        printf("Your Exam At 10AM...\n");
        break;

        case 4:
        printf("Your Exam At 11AM...\n");
        break;

        case 5:
        printf("Your Exam At 12PM...\n");
        break;

        default:
            printf("Wrong Input");

    }
}

int main()
{
    int iClass = 0;

    printf("Enter your Class : \n");
    scanf("%d",&iClass);

    DisplayClass(iClass);

    return 0;
}

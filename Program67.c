// Accept Number of elements from user and Display Odd Number

#include<stdio.h>
#include<stdlib.h>

void DisplayOdd(int Arr[], int iSize)
{
    int iCnt = 0, iCounter = 0;

    printf("\nOdd Elements of the array are : \n");
    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            printf("%d",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iCount = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements that you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int *)malloc(iCount * sizeof(int));

    printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);
    printf("Enter the %d values : \n",iCount);
    //      1           2           3
    for(iCnt = 0; iCnt < iCount; iCnt++)    // O(N)
    {
        printf("\nEnter the element no %d : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);     // 4
    }

    DisplayOdd(ptr, iCount);
    
    free(ptr); 
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}
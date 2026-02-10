// Accept Number of elements from user and return addition of elements of Array

#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
}

int main()
{
    int iCount = 0, iCnt = 0, iRet = 0;
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

    iRet = Addition(ptr, iCount);

    printf("Addition of elements are : %d\n",iRet);
    
    free(ptr); 
    printf("Dynamic memory gets deallocated succesfully...\n");

    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5 : Perform the operation on array
int SumEven(int *Arr, int iSize)
{
    int iCnt =0;
    int iSum = 0;
    //      1           2           3
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)    // 4
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int SumOdd(int *Arr, int iSize)
{
    int iSum = 0; 
    int iCnt = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iSum = iSum + Arr[iCnt];
        }
    }
    return iSum;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i = 0, iRet = 0;

    // Step 1 : Accept size of array
    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int *)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for(i = 0 ;i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }


    // Step 4 : Call the function
    iRet = SumEven(ptr, iLength);
    printf("Summation of even elements is: %d\n",iRet);

    iRet = SumOdd(ptr, iLength);
    printf("Summation of odd elements is: %d\n",iRet);

    // Step 6 : Deallocate the memory
    free(ptr);

    return 0;
}
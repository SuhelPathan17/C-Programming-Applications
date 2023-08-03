#include<stdio.h>
#include<stdlib.h>

int SumEven(int *ptr, int iSize)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(ptr[iCnt] % 2 == 0)
        {
            iSum = iSum + ptr[iCnt];
        }
    }

    return iSum;
}

int Minimum(int *ptr, int iSize)
{
    int iCnt = 0;
    int iMin = ptr[0];
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(ptr[iCnt] < iMin)
        {
            iMin = ptr[iCnt];
        }
    }

    return iMin;
}

int main()
{
    int iLength = 0;
    int *Arr = NULL;
    int iRet = 0;
    int iCnt = 0;

    printf("Enter the length of an array\n");
    scanf("%d",&iLength);

    Arr = (int *)malloc(iLength * sizeof(int));
    
    printf("Enter the elements inside Array\n");
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of array are :\n");
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    iRet = Minimum(Arr,iLength);
    printf("Minimum element from array is : %d\n",iRet);
    free(Arr);
    return 0;
}
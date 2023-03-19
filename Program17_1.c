#include<stdio.h>
#include<stdlib.h>


int Largest(int *Arr, int iSize)
{
    int iCnt = 0, iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    
    }
    return iMax;

}

int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0; 
    int iRet = 0;

    printf("Enter How Many Elements u want to Eneter :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }

    printf("Enter Elements :\n");

    for(i = 0; i<iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Largest(ptr,iLength);
    printf("Largest Number is : %d",iRet);
    
    
    

    free(ptr);

    return 0;
}
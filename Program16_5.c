#include<stdio.h>
#include<stdlib.h>


int Product_ODD(int *Arr, int iSize)
{
    int iCnt = 0, iMult = 1;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMult = iMult * Arr[iCnt] ;
        }
    
    }
    if(iMult == 1)
    {
        return 0;
    }
    else
    {
        return iMult;
    }
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

    iRet = Product_ODD(ptr,iLength);
    printf("Product of all odd elments is : %d",iRet);
    
    
    

    free(ptr);

    return 0;
}
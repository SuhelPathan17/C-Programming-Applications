#include<stdio.h>
#include<stdlib.h>


void Difference(int *Arr, int iSize)
{
    int iCnt = 0,iDigit = 0, iTemp = 0,iSum = 0;
    for(iCnt = 0; iCnt < iSize ; iCnt++,iDigit = 0,iSum = 0)
    {
        iTemp = Arr[iCnt];
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iSum + iDigit;
            iTemp = iTemp / 10;
        }
        printf("%d\t",iSum);
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

    Difference(ptr,iLength);
    
    
    
    

    free(ptr);

    return 0;
}
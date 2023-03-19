#include<stdio.h>
#include<stdlib.h>

int Difference(int *Arr, int iSize)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSum1 = iSum1 + Arr[iCnt];
        }
        else
        {
            iSum2 = iSum2 + Arr[iCnt];
        }
    }
    return (iSum1 -iSum2) ;

}
int main()
{
    int *ptr = NULL;
    int iLength = 0, i =0, iRet = 0;

    printf("Enter How Many Elements u want to Eneter :\n");
    scanf("%d",&iLength);

    ptr = (int*)malloc(iLength*sizeof(int));
    if(ptr == NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }


    printf("Enter Elements :\n");

    for(i = 0; i<iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Difference(ptr,iLength);
    printf("Result of Difference is:%d",iRet);

    free(ptr);

    return 0;
}
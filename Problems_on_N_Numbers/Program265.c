#include<stdio.h>
#include<stdlib.h>

void Accept(int *Arr, int iLength)
{
    int iCnt = 0;
    printf("Enter the elements inside Array\n");
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
}

void Display(int *Arr,int iLength)
{
    int iCnt = 0;
    printf("Elements of array are :\n");
    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

void Reverse(int *ptr,int iLength)
{
    int iStart = 0;
    int iEnd = (iLength-1);
    int iTemp = 0;
    int iCnt = 0;

    while(iStart < iEnd)
    {
            iTemp = ptr[iStart];
            ptr[iStart] = ptr[iEnd];
            ptr[iEnd] = iTemp;

        iStart++;
        iEnd--;
    }
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
    
    
    Accept(Arr,iLength);
    Display(Arr,iLength);

    Reverse(Arr,iLength);
    Display(Arr,iLength);

    free(Arr);
    return 0;
}
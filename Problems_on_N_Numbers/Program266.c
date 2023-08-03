#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckArrayPalindrome(int *ptr,int iLength)
{
    int iStart = 0;
    int iEnd = (iLength-1);
    bool bFlag = true;
    int iCnt = 0;

    while(iStart < iEnd)
    {
            if(ptr[iStart] != ptr[iEnd])
            {
                bFlag = false;
                break;
            }

        iStart++;
        iEnd--;
    }
    return bFlag;
}

int main()
{
    int iLength = 0;
    int *Arr = NULL;
    bool bRet = false;
    int iCnt = 0;

    printf("Enter the length of an array\n");
    scanf("%d",&iLength);

    Arr = (int *)malloc(iLength * sizeof(int));
    
    
    Accept(Arr,iLength);
    Display(Arr,iLength);

    bRet = CheckArrayPalindrome(Arr,iLength);
    if(bRet == true)
    {
        printf("Array is Palindrome\n");
    }
    else
    {
        printf("Array is not Palindrome\n");
    }

    free(Arr);
    return 0;
}
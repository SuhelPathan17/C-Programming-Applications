#include<stdio.h>

int KMtoMeter(int iNo)
{ 
    int iMeter = iNo * 1000;
    return iMeter;
}

int main()
{  
    int iValue = 0,iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    printf("%d KM in Meter is: %d",iValue,iRet);
    

    return 0;
}
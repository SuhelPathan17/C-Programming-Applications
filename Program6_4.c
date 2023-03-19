#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{   
    int Arr[3] = {iNo1,iNo2,iNo3};
    int Ans = 1;
    if( Arr[0]== 0 && Arr[1] == 0 && Arr[2] == 0)
    {
        return 0;
    }
    for(int iCnt = 0; iCnt < 3; iCnt++)
    {
        if (Arr[iCnt]==0)
        {
            Arr[iCnt]=1;
        }
        Ans = Ans * Arr[iCnt];
    }
    return Ans;

}
int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Enter First Number :\n");
    scanf("%d",&iValue1);
    printf("Enter Second Number :\n");
    scanf("%d",&iValue2);
    printf("Enter Third Number :\n");
    scanf("%d",&iValue3);


    iRet = Multiply(iValue1,iValue2,iValue3);
    printf("Multiplication is : %d",iRet);

    return 0;
}
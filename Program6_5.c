#include<stdio.h>

float Percentage(int iNo1,int iNo2)
{
    float Ans = 0.0;
    Ans = iNo2*100/(float)iNo1;
    return Ans;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;
    
    printf("Enter Total Marks :\n");
    scanf("%d",&iValue1);
    printf("Enter Obtained Marks :\n");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);
    printf("Percentage is : %f %%",fRet); 

    
}

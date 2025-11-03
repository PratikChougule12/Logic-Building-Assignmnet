#include<stdio.h>

int MulDigits(int iNo)
{
    int iMul = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(1<=iNo)
    {
        int iDigit = 0;
        iDigit = iNo % 10;
        iNo = iNo / 10;
       iMul = iNo*iNo;
    }
    return iMul;
}
//Time Complexity O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter A number :");
    scanf("%d",&iValue);

   iRet = MulDigits(iValue);

   printf("%d",iRet);

    return 0;
}
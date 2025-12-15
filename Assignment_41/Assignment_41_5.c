#include<stdio.h>

int Sum (int iNo)
{
    int iDigit = 0,iMul = 0;

    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMul = 1;                        // Reinitialiaze
    //O(n) 
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMul = iMul * iDigit;
        iNo = iNo / 10;
    }
    return iMul;
}
// Main Function
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the Digit :\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Multiplication of digit : %d\n",iRet);

    return 0;
}
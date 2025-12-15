#include<stdio.h>

int Sum (int iNo)
{
    int iDigit = 0,iSum = 0;

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //O(n) 
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}
// Main Function
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the Digit :\n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Sum of digit : %d\n",iRet);

    return 0;
}
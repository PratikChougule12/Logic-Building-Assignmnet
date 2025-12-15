#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 0;
    //Udater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    //O(n) 
    for(iCnt = 1,iFact = 1; iCnt <= iNo; iCnt++)
    {
       iFact = iFact * iCnt;
    }
    printf("\n");
    return iFact;
}
// Main Function
int main()
{

    int iValue = 0, iRet = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d: %d",iValue,iRet);

    return 0;
}
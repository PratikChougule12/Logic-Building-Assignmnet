#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFactOdd = 0;
    iFactOdd = 1;
    int iFactEven = 0;
    iFactEven = 1;
    int iDifference = 0;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; 1 <= iCnt; iCnt--)
    {
        if (iCnt%2==0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else
        {
           iFactOdd = iFactOdd * iCnt;
        }
     }
     
     iDifference = iFactEven - iFactOdd;
    return iDifference;
}
//Time Complexity O(n)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter A  Number  : \n");
    scanf("%d",&iValue);

  iRet= OddFactorial(iValue);

    printf("Difference between odd and Even Factorial is %d",iRet);
    return 0;
}
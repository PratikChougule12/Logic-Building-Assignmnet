#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    iFact = 1;
    
    if(iNo<0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = iNo; 1 <= iCnt; iCnt--)
    {
      if (iCnt%2!=0)
      {
        iFact = iFact * iCnt;
      }
     }
    return iFact;
}
//Time Complexity O(n)
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter A  Number  : \n");
    scanf("%d",&iValue);

  iRet= OddFactorial(iValue);

    printf("Odd Factorial of Number is %d",iRet);
    return 0;
}
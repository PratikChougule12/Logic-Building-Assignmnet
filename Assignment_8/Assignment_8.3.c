#include<stdio.h>

int Factorial(int iNo)
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
        iFact = iFact * iCnt;
    }
    return iFact;
}
//Time Complexity O(n)
int main() 
{
    
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter A Number : \n");
    scanf("%d",&iValue);
    
   iRet = Factorial(iValue);
   
   printf("Factorial of Number :%d ",iRet);
 
    return 0;
}

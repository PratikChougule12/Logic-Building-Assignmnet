#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iAdd = 0;
    int iDiff = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo%iCnt==0)
        {
             iSum = iSum + iCnt;
        }
        else
        {
            iAdd = iAdd + iCnt;
        }
    }
     iDiff = iSum - iAdd ; 
    return iDiff;
}
//Time Complexity O(n)
int main()
{
     int iValue = 0;
    int iRet = 0;
    
    printf("Enter A number :\n");
    scanf("%d",&iValue);

 iRet = FactDiff(iValue);

 printf("%d",iRet);
    return 0;
}
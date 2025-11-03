#include<stdio.h>

int MulFact(int iNo)
{
    int iCnt = 0;
    int iFact = 0;
    iFact = 1;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=(iNo/2); iCnt++)
    {
        if(iNo%iCnt==0)
        {
             iFact = iFact * iCnt;
        }
    }
    return iFact;
}
//Time Complexity O(n/2)
int main()
{
     int iValue = 0;
    int iRet = 0;
    
    printf("Enter A number :\n");
    scanf("%d",&iValue);

 iRet = MulFact(iValue);

 printf("%d",iRet);
    return 0;
}
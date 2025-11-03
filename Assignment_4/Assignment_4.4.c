#include<stdio.h>

int SumOfNonFact(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <=iNo; iCnt++)
    {
        if(iNo%iCnt!=0)
        {
             iSum = iSum + iCnt;
        }
    }
    return iSum;
}
int main()
{
     int iValue = 0;
    int iRet = 0;
    
    printf("Enter A number :\n");
    scanf("%d",&iValue);

 iRet = SumOfNonFact(iValue);

 printf("%d",iRet);
    return 0;
}
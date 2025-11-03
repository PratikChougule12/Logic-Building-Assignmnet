#include<stdio.h>

int CountOdd(int iNo)
{
    int iCount = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(1<=iNo)
    {
        int iDigit = 0;
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit%2!=0)
        {
            iCount++;
        }
    }
    return iCount;
}
//Time Complexity O(n)
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter A number :");
    scanf("%d",&iValue);

   iRet = CountOdd(iValue);

   printf("%d",iRet);

    return 0;
}
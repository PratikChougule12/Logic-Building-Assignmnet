#include<stdio.h>

int CountFour(int iNo)
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
        if(iDigit==4)
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

   iRet = CountFour(iValue);

   printf("%d",iRet);

    return 0;
}
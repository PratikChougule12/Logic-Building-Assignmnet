#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkZero(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(iNo>=1)
    {
        int iDigit = 0;
        iDigit = iNo % 10;
        iNo = iNo / 10;
      if(iDigit==0)
        {
            return TRUE;
        } 
    }  
    return FALSE;       
}
//Time Complexity O(n)
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter A number :");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}
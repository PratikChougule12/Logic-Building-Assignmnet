#include<stdio.h>

void DisplayDigit(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    while(1<=iNo)
    {
        int iDigit = 0;
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo = iNo / 10;
    }
}
//Time Complexity O(n)
int main()
{
    int iValue = 0;

    printf("Enter A number :");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}
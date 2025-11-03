#include<stdio.h>

int KMToMeter(int iNo)
{
    int iMeter = 0;
    iMeter = iNo * 1000;
    return iMeter;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in Meter is %d",iRet);

    return 0;
}
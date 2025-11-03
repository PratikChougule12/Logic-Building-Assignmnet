#include<stdio.h>
//Conversion of Ruppes to $ consider $1 = 70 rs
int DollarToInt(int iNo)
{
   int iDollar = 0;
   iDollar = 70 * iNo;
   return iDollar;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter A  Number of USD : \n");
    scanf("%d",&iValue);

  iRet= DollarToInt(iValue);

    printf("Value in INR is %d",iRet);
    return 0;
}
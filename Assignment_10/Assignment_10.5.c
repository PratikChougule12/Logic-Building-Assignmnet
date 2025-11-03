#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSquare = 0.0;
    dSquare = iValue * 0.0929;
    return dSquare;
}
int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter is %lf",dRet);

    return 0;
}
#include<stdio.h>

double RectangleArea(float fLength, float fHeight)
{
    double dArea = 0.0;
    dArea = fLength * fHeight;
    return dArea;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Length : \n");
    scanf("%f",&fValue1);
    printf("Enter Height : \n");
    scanf("%f",&fValue2);

    dRet = RectangleArea(fValue1,fValue2);

    printf("Area of Rectangle is %lf",dRet);

    return 0;
}
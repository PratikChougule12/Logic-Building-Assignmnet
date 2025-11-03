#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCelcius = 0.0;
    dCelcius =(fTemp - 32) *((float)5/9);
    return dCelcius;
}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temparaturein Ferhenite : \n");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);

    printf("Temparature in Celcius is %lf",dRet);

    return 0;
}
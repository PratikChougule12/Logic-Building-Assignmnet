#include <stdio.h>

int sum_of_factors(int iNo)
{
    int sum = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            sum += iCnt;
        }
    }
    return sum;
}

int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = sum_of_factors(iValue);

    printf("Sum of factors = %d",iRet);
    return 0;
}
/*
Time Complexity: O(n)
*/
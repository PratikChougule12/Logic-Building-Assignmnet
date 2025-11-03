#include <stdio.h>

int sum_even_factors(int iNo)
{
    int sum = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if (iNo % i == 0 && iCnt % 2 == 0)
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

    iRet = sum_even_factors(iValue);

    printf("Sum of even factors (excluding number) = %d",iRet);
    return 0;
}
/*
Time Complexity: O(n)
*/
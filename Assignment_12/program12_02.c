#include <stdio.h>

int count_factors(int iNo)
{
    int count = 0;
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = count_factors(iValue);

    printf("Total factors = %d", iRet);
    return 0;
}
/*
Time Complexity: O(n)
*/
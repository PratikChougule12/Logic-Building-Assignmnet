#include <stdio.h>
#include <stdbool.h>

bool is_divisible_by_five(int iNo)
{
    if (iNo % 5 == 0)
        return true;
    else
        return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number: ");
    scanf("%d", &iValue);

    bRet = is_divisible_by_five(iValue);
    
    if (bRet == true)
    {
        printf("%d is divisible by 5", iValue);
    }  
    else
    {
        printf("%d is not divisible by 5", iValue);
    }

    return 0;
}
/*
Time Complexity: O(1)
*/
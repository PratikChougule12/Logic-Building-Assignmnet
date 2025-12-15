#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //O(n) 
    for(iCnt = iNo; iCnt >= 1 ; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}

// Main Function
int main()
{

    int iValue = 5;
    
    Display(iValue);

    return 0;
}
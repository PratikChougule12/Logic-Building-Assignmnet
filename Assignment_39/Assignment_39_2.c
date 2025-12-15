#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //O(n)
    for(iCnt = 1; iCnt <= iNo ; iCnt++)
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
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
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

    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
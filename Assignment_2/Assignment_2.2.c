#include<stdio.h>

void Display(int iNo)
{
     // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    } 
    
    while(iNo >= 1)
    {
        printf("*");
        iNo--; 
    }
}
//Time Complexity O(n)
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}
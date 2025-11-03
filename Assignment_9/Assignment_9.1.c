#include<stdio.h>
void Display(int iNo)
{
    if(iNo<0)
    {
        iNo = -iNo;
    }
    int iCnt = 0;
//Time Complexity O(n)
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
//Time Complexity O(n)
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter A  Number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
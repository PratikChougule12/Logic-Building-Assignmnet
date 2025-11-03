#include<stdio.h>
void Display(int iNo1, int iFrequency)
{
    int iCnt = 0;

    // updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for( iCnt=1; iCnt <= iFrequency; iCnt++)
    {
        printf( "%d\t",iNo1);
       
    }
}
//Time Complexity O(n)
int main()
{
    int iValue1 = 0;
    int iCount = 0;

    printf("Enter A number that you want to Display :");
    scanf("%d",&iValue1);

    printf("Entere frequnecy  :");
    scanf("%d",&iCount);

    Display(iValue1,iCount);

    return 0;
}

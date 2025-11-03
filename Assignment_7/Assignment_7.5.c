#include<stdio.h>

void Displayodd(int iNo)
{
    int iCnt = 0;
    
    
    for(iCnt = iNo; iCnt <= (iNo*5); iCnt++)
    {
        if(iCnt%iNo==0)
        {
            printf("%d\t",iCnt); 
    
        }
    }
}
//Time Complexity O(n*5)
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Displayodd(iValue);
    
    return 0;
}
#include<stdio.h>

void Displayodd(int iNo)
{
    int iCnt = 0;
    
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt%2 !=0)
        {
            printf("%d\t",iCnt); 
    
        }
    }
}
//Time Complexity O(n)
int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    Displayodd(iValue);
    
    return 0;
}
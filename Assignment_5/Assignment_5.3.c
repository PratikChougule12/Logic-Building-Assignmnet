#include <stdio.h>

void CheckLeapYear(int year)
{
    if(year%4==0)
    {
        printf("%d Year is Leap Year \n",year);
    }
    else
    {
        printf("%d Year is Not Leap Year \n",year);
    }
}
int main() 
{
    
    int yr = 0;
    
    printf("Enter A Year : \n");
    scanf("%d",&yr);
    
    CheckLeapYear(yr);
    
    return 0;
}

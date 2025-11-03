#include <stdio.h>

void CheckEvenOdd(int num)
{
    if(num%2==0)
    {
        printf(" %d Number is Even",num);
    }
    else
    {
        printf(" %d Number is Odd",num);
    }
}
int main() 
{
    
    int number = 0;
    
    printf("Enter A Number : \n");
    scanf("%d",&number);
    
    CheckEvenOdd(number);
    
    return 0;
}
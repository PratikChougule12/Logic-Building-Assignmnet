#include <stdio.h>
 void print_even_natural_number(int iNo)
 {
     int iCnt = 0;
     int iSum = 0;
     for(iCnt = 1;iCnt<=iNo; iCnt++)
     {
        if(iCnt%2==0)
        {
            iSum = iSum + iCnt;
        }
        
        
     }
      printf("%d\t",iSum);
 }
 //Time Complexity O(n)
int main() 
{
    int iLimit = 0;
    
    printf("Enter the number ");
    scanf("%d",&iLimit);
    print_even_natural_number(iLimit);

     return 0;
}
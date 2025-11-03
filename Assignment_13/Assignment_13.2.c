#include <stdio.h>
 void print_even_number(int iNo)
 {
     int iCnt = 0;
     for(iCnt = 1;iCnt<=iNo; iCnt++)
     {
         if(iCnt%2==0)
        {
             printf("%d\t",iCnt);
        }
     }
 }
 //Time Complexity O(n)
int main() {
    int iLimit = 0;
    
    printf("Enter the number ");
    scanf("%d",&iLimit);
    print_even_number(iLimit);

   return 0;
}
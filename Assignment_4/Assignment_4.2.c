#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(iCnt = (iNo/2);(iNo/2) >=1; iCnt--)
    {
        if(iNo%iCnt==0)
        {
             printf("%d\t",iCnt);
        }
    }
 
}
//Time Complexity O(n/2)
int main()
{
     int iValue = 0;
   
    
    printf("Enter A number :\n");
    scanf("%d",&iValue);

 FactRev(iValue);
    return 0;
}
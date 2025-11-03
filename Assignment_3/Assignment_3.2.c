#include<stdio.h>
void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo<0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <=(iNo/2); i++)
    {
        if(iNo%i==0)
        {
            if(i%2==0)
            {
                 printf("%d\t",i);
            }
        }
        
    }
}

// Time Complexity O(n/2)
int main()
{
    int iValue = 0;
    
    printf("Enter A number :\n");
    scanf("%d",&iValue);

  DisplayFactor(iValue);
   
    return 0;
}
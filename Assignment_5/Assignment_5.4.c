#include <stdio.h>

void CheckNumberType(int num)
{
    if(num > 0)
    {
        printf("%d Number is positive \n",num);
    }
    else
        if(num<0)
             {
                 printf("%d Number is Negative \n",num);
             }
        else
            {
                printf("%d Number is 0 \n",num);
            }
}
int main() 
{
    
    int number = 0;
    
    printf("Enter A Number : \n");
    scanf("%d",&number);
    
    CheckNumberType(number);
    
    return 0;
}

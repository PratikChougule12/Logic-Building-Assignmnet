#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckDigit(char ch)
{
            //ASCII         ASCII
        if((ch >= 48)&& (ch <= 57) )
        {
            return 1;

        }
        else
        {
            return 0;
        }
        
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    
    printf("Enter Character :\n");
    scanf("%c",&cValue);
      
    bRet = CheckDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit");
    }
    else
    {
        printf("It is not Digit");
    }
  
    return 0;
}
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckCapital(char ch)
{
    
        if((ch >= 'A')&& (ch <= 'Z') )
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
      
    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital letter");
    }
    else
    {
        printf("It is not capital letter");
    }
  
    return 0;
}
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckAlphabate(char ch)
{
    
        if((ch >= 'a')&& (ch <= 'z'))
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
    
    printf("Enter String :\n");
    scanf("%c",&cValue);
      
    bRet = CheckAlphabate(cValue);

    if(bRet == TRUE)
    {
        printf("It is Small character");
    }
    else
    {
        printf("It is not Small character");
    }
  
    return 0;
}
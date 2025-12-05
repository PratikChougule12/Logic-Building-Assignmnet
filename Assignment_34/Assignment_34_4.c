#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckSpecialSymbol(char ch)
{
    
        if((ch >= 33)&& (ch <= 47)|| (ch >= 58)&& (ch <= 64) || (ch >= 91)&& (ch <= 96) )
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
      
    bRet = CheckSpecialSymbol(cValue);

    if(bRet == TRUE)
    {
        printf("%c is Special Symbol",cValue);
    }
    else
    {
        printf("%c is not Special symbol",cValue);
    }
  
    return 0;
}
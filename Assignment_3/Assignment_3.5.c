#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

bool ChkVowel(char CValue)
{

    if(CValue == 'a'|| CValue == 'e'|| CValue =='i'|| CValue =='o'|| CValue =='u'||
       CValue == 'A'|| CValue == 'E'|| CValue =='I'|| CValue =='O'|| CValue =='U'  
      )
    {
       return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = false;

    printf("Enter A character :\n");
    scanf("%c",&cValue);

   bRet = ChkVowel(cValue);

   if(bRet == true)
   {
        printf("%c Letter is Vowel ",cValue);
   }
   else
   {
        printf("%c Letter is not Vowel",cValue);
   }
   
    return 0;
}
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL SearchCharacter(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)                                                                           
        {
            iCount++;
            break;
        }
        str++;
    }
    if(iCount>0)
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
    char Arr[50] = {'\0'};
    char cValue = '\0';
    BOOL bRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);

   bRet = SearchCharacter(Arr,cValue);

    if(bRet == TRUE)
    {
        printf("Character Found");
    }
    else
    {
        printf("Character not Found");
    }

    return 0;
}
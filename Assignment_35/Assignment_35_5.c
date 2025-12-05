#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Vowel(char str[])
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == 'a')|| (*str == 'e')||(*str == 'i')||(*str == 'o')||(*str == 'u')||
           (*str == 'A')|| (*str == 'E')||(*str == 'I')||(*str == 'O')||(*str == 'U'))                                                                             
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
    BOOL bRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
                            
   bRet = Vowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contain Vowel");
    }
    else
    {
        printf("It is not contain Vowel");
    }

    return 0;

}


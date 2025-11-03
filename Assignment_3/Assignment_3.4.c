#include<stdio.h>

void DisplayConverte(char cValue)
{

    if(cValue >=65 && cValue <=90 )
    {
        cValue = cValue +32;
        printf("Converted character: %c\n", cValue );
    }
    else
         if(cValue >= 97 && cValue <= 122)
            {
                cValue = cValue - 32;  
                printf("Converted character: %c\n", cValue);
            }
         else
             {
                 printf("Invalied Choice.\n");
             }
}

int main()
{
    char cValue = '\0';

    printf("Enter A character :\n");
    scanf("%c",&cValue);

    DisplayConverte(cValue);
   
    return 0;
}
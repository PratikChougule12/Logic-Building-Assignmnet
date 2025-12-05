#include<stdio.h>

void Display(char ch)
{

    if((ch >= 'A')&& (ch <= 'Z'))
    {
       
        printf("Decimal Value:%d\n",ch);
        printf("Octal Value:%o\n",ch);
        printf("Hexadecimal value:%x\n",ch);
    }
    else
     if((ch >= 'a')&& (ch <= 'z'))
    {
        printf("Decimal Value:%d\n",ch);
        printf("Octal Value:%o\n",ch);
        printf("Hexadecimal value:%x\n",ch);
    }
   

}

int main()
{
    char cValue = '\0';
    
    printf("Enter Character :\n");
    scanf("%c",&cValue);
      
    Display(cValue);

    return 0;
}
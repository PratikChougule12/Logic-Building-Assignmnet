#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    //O(n) 
    for(iCnt = 0,ch = 'a'; iCnt < iNo ; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }
     printf("\n");
}

// Main Function
int main()
{

    int iValue = 5;

    Display(iValue);

    return 0;
}
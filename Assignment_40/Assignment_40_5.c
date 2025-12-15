#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';

    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    // Filter
     if(iNo > 26)
    {
        printf("Exceeds limit");
        printf("There are only 27 Alphabate please give input less than 26 and try again");
        return;
    }
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

    int iValue = 0;

    printf("Enter the Frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
#include<stdio.h>

int SearchCharacter(char str[], char ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)                                                                           
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);

    printf("Enter Character :\n");
    scanf(" %c",&cValue);

   iRet = SearchCharacter(Arr,cValue);

    

        printf("Frequency of Appering character:%d\n",iRet);

    return 0;
}
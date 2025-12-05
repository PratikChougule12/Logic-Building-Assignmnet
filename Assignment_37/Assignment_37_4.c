#include<stdio.h>

int LastIndex(char str[], char ch)
{
    int index = 0;
    int lastIndex = -1;

    while(str[index] != '\0')
    {
        if(str[index] == ch)
        {
            lastIndex = index;
        }
        index++;
    }

    return lastIndex;
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

    iRet = LastIndex(Arr, cValue);

    printf("Last index of character: %d\n", iRet);

    return 0;
}

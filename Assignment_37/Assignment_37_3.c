#include<stdio.h>

int CharacterIndex(char str[], char ch)
{
    int index = 0;

    while(str[index] != '\0')
    {
        if(str[index] == ch)
        {
            return index;
        }
        index++;
    }

    return -1;
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

    iRet = CharacterIndex(Arr,cValue);

    printf("Index of character: %d\n",iRet);

    return 0;
}

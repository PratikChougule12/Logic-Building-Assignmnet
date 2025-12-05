#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while (*str != '\0')
    {
        if (*str == ' ')   // check for white space
        {
            iCount++;
        }
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter string: ");
    scanf("%[^\n]s", Arr);

    iRet = CountWhite(Arr);

    printf( "%d",iRet);

    return 0;
}

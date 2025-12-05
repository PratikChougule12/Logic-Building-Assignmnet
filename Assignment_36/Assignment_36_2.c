#include<stdio.h>

void strlwrx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str += 'a' - 'A';   // Convert to lowercase
        }
        str++;
    }
}
int main()
{
    char Arr[50];

    printf("Enter string:");
    scanf("%{^\n']s",Arr);

    strlwrx(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}
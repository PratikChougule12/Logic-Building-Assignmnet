#include<stdio.h>

void strtoggle(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }
    
        else if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }

        str++;
    }
}
int main()
{
    char Arr[50];

    printf("Enter string:");
    scanf("%{^\n']s",Arr);

    strtoggle(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}
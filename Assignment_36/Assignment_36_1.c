#include<stdio.h>

void struprx(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;  //  to lowercase
        }
        str++;
    }
}
int main()
{
    char Arr[50];

    printf("Enter string:");
    scanf("%{^\n']s",Arr);

    struprx(Arr);

    printf("Modified string is %s",Arr);

    return 0;
}
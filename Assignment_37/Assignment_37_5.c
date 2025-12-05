#include<stdio.h>

void strevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp = '\0';

    while (*end != '\0')
    {
         end++; 
    }

    end--;
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;
        
        start++;
        end--;
    }
    
    printf("\n");
     
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter  String :\n");
    scanf("%[^'\n']s",Arr);

    strevX(Arr);

    printf("Updated String : %s",Arr);

    return 0;
}
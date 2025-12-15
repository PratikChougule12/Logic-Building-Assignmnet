#include<stdio.h>

int Strlen(char str[])
{
    int iCount = 0;
    //O(n) 
    while(*str != '\0')
    {
        if((*str >= 'A' )&& (*str <= 'Z') || (*str >= 'a') && (*str <= 'z'))
        {
             iCount++;
        }
        str++;
    }
    
    return iCount;
}
// Main Function
int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
                            
   iRet = Strlen(Arr);

   printf("Number of Character Present in string : %d\n",iRet);

    return 0;
}
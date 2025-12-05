#include<stdio.h>

int Difference(char str[])
{
    int iSmallCount = 0,iBigCount =0;

    while(*str != '\0')
    {
        if((*str >= 'a' )&& (*str <= 'z'))
        {
            iSmallCount++;
        }
        else
        {
            iBigCount++;
        }
        str++;
    }
    
    return (iSmallCount-iBigCount);
}

int main()
{
    char Arr[50] = {'\0'};
    int iRet = 0;

    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
                            
   iRet = Difference(Arr);

   printf("Number of Small leters are : %d\n",iRet);

    return 0;
}
#include<stdio.h>
#include<stdbool.h>

bool Check(int iNo)
{
    if(iNo % 5 ==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number \n");
    scanf("%d",&iValue);

    bRet = Check(iValue);

    if(bRet == true)
    {
        printf(" %d Divisible is by 5",iValue);
    }
    else
    {
         printf(" %d Not Divisible is by 5",iValue);
    }


    return 0;
}
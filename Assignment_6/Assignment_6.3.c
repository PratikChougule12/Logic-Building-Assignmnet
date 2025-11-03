#include <stdio.h>
#include <stdbool.h>

bool CheckEqual(int iNo1, int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false; 
    
    printf("Enter A First Number : \n");
    scanf("%d",&iValue1);
    
    printf("Enter A Second Number : \n");
    scanf("%d",&iValue2);
    
    bRet = CheckEqual(iValue1,iValue2);
    
     if(bRet == true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }
    return 0;
}
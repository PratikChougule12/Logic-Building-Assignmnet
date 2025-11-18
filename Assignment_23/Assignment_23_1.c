#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL Check(int iArr[],int iLength, int iNo)
{
    int iCnt = 0; 
    BOOL bFlag = FALSE;

    // <O(n)
     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        if(iArr[iCnt] == iNo)
        {
            bFlag = 1;
            break;
        }
     }

     return bFlag;
}

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0;
    BOOL bRet = FALSE;
    int * iPtr;

    printf("Enter Number How much Element You want to Enter :\n ");
    scanf("%d",&iSize);

    printf("Enter the Number :\n ");
    scanf("%d",&iValue);

    // Allocate the memory     
    iPtr = (int *)malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to allocate the Memory");
        return -1;
    }

    printf("Enter the Elements");

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Use the Memory
    bRet = Check(iPtr,iSize,iValue);
    
    if (bRet == TRUE)
    {
        printf("The %d is Present in elemets\n ",iValue);
    }
    else
    {
        printf("The %d is Not Present in elemets\n ",iValue);
    }
    
    free(iPtr);     // Deallocate Memory
    
    return 0;
}
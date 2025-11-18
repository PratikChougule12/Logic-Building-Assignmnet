#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0


bool Check(int iArr[], int iLength)
{
    int iCnt = 0;

    // O(n)
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
            break;
        }       
    }
    return(iCnt != iLength);
}

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0;
    bool bRet = false;
    int *iPtr = NULL;

    printf("Enter Elements You Want : \n");
    scanf("%d",&iSize);

    printf("Enter a Elemets \n");

    // Allocate the memory 
    iPtr = (int *)malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to alloacate the memory");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Use the Memory
    bRet = Check(iPtr,iSize);

    if(bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }

    free(iPtr);     // Deallocate Memory

    return 0;
}
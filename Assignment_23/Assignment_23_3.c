#include<stdio.h>
#include<stdlib.h>

int LastOccu(int iArr[],int iLength, int iNo)
{
    int iCnt = 0,iFlag = 0; 
    iFlag = -1;

     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        if(iArr[iCnt] == iNo)
        {
            iFlag = iCnt;
        }
     }
     return iFlag;
}  

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iValue = 0, iRet = 0;
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

    printf("Enter the Elements :\n");

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Use the Memory
    iRet = LastOccu(iPtr,iSize,iValue);
    
    if (iRet == -1)
    {
        printf("There is no such number \n");
    }
    else
    {
        printf("Index : %d",iRet);
    }
    
    free(iPtr);     // Deallocate Memory
    
    return 0;
}
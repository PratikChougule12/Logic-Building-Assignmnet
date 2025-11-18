#include<stdio.h>
#include<stdlib.h>

void Range(int iArr[],int iLength, int iStart, int iEnd)
{
    int iCnt = 0,iFlag = 0; 

     for(iCnt = 0; iCnt < iLength; iCnt++)
     {
        if((iArr[iCnt] >=iStart) && (iArr[iCnt]<=iEnd) )
        {
            printf("%d\t",iArr[iCnt]);
        }
     }
}

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iValue1 = 0, iValue2 = 0;
    int * iPtr;

    printf("Enter Number How much Element You want to Enter :\n ");
    scanf("%d",&iSize);

    printf("Enter the Starting of Range :\n ");
    scanf("%d",&iValue1);

    printf("Enter the Ending of Range :\n ");
    scanf("%d",&iValue2);    

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
    Range(iPtr,iSize,iValue1,iValue2);
    
    
    free(iPtr);     // Deallocate Memory
    
    return 0;
}
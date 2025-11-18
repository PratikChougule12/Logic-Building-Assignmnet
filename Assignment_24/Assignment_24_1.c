#include<stdio.h>
#include<stdlib.h>


int Maximum(int iArr[],int iSize)
{
    int iCnt = 0, iMax = 0;
    
    // O(n)
    for(iCnt = 0,iMax = iArr[0]; iCnt < iSize; iCnt++)
    {
        if(iMax < iArr[iCnt])
        {
            iMax = iArr[iCnt];
        }
        
    }
    return iMax;
}

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iLegnth = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter how many Elements you want to enter : \n");
    scanf("%d",&iLegnth);

    printf("Enter The Elements :\n");

    // Allocate the memory 
    iPtr = (int *)malloc(iLegnth * sizeof(int));

    if(NULL == iPtr)
    {
        printf("unable to Allocate the Memory \n");
        return -1;
    }

    for(iCnt = 0; iCnt < iLegnth; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Use the Memory
    iRet = Maximum(iPtr,iLegnth);

    printf("Maximum Number from Element is : %d\n",iRet);

    free(iPtr);     // Deallocate Memory

    return 0;
}
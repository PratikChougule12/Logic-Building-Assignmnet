#include<stdio.h>
#include<stdlib.h>


int Minimum(int iArr[],int iSize)
{
    int iCnt = 0, iMin = 0;
    
    // O(n)
    for(iCnt = 0,iMin = iArr[0]; iCnt < iSize; iCnt++)
    {
        if(iMin > iArr[iCnt])
        {
            iMin = iArr[iCnt];
        }
        
    }
    return iMin;
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
    iRet = Minimum(iPtr,iLegnth);

    printf("Minimum Number from Element is : %d\n",iRet);

    free(iPtr);     // Deallocate Memory

    return 0;
}
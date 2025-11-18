#include<stdio.h>
#include<stdlib.h>

int Frequency(int iArr[], int iLength)
{
    int iCnt = 0, iFrequency = 0;

    // O(n)
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(iArr[iCnt] == 11)
        {
            iFrequency++;
        }       
    }
    return iFrequency;
}

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter Elements You Want : \n");
    scanf("%d",&iSize);

    printf("Enter a Elemets \n");

    // Allocate the memory 
    iPtr = (int *)malloc(iSize * sizeof(int));

    if(NULL == iPtr)
    {
        printf("Unable to alloacate the memoey");
        return -1;
    }

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Use the Memory
    iRet = Frequency(iPtr,iSize);

    printf("Frequency of Coming 11 is : %d\n",iRet);

    free(iPtr);     // Deallocate Memory

    return 0;
}
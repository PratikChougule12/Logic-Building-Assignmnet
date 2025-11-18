#include<stdio.h>
#include<stdlib.h>

int Frequency(int iArr[], int iLength, int iNo)
{
    int iCnt = 0, iFrequency = 0;

    // O(n)
    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(iArr[iCnt] == iNo)
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
    int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
    int *iPtr = NULL;

    printf("Enter Elements You Want : \n");
    scanf("%d",&iSize);

    printf("Enter the Number : \n");
    scanf("%d",&iValue);

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
    iRet = Frequency(iPtr,iSize,iValue);

    printf("Frequency of Coming Number is : %d\n",iRet);

    free(iPtr);     // Deallocate Memory

    return 0;
}
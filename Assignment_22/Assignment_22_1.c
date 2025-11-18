#include<stdio.h>
#include<stdlib.h>

int CountEven(int iArr[], int iLength)
{
    int iCnt = 0, iFrequency = 0;

    // O(n)
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if((iArr[iCnt]%2)==0)
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

    printf("Enter the number of Elements you want to inserte : \n");
    scanf("%d",&iSize);

    printf("Enter the elemets : \n");

    // Allocate the memory 
    iPtr =(int *)malloc(iSize * sizeof(int));
    if(NULL == iPtr)
    {
        printf("Unable to allocate the Memory \n");
        return -1;
    }

     for(iCnt = 0; iCnt<iSize;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    //Use the Memory
    iRet = CountEven(iPtr,iSize);

    printf("Result is : %d\n",iRet);

    free(iPtr);     // Deallocate Memory


    return 0;
}
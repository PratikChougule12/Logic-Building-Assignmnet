#include<stdio.h>
#include<stdlib.h>


void Digits(int iArr[],int iSize)
{
    int iCnt = 0, iDigit = 0, iNum = 0, iSum = 0;
    
    // O(n)
    for(iCnt = 0; iCnt < iSize; iCnt++)
    { 
        iNum = iArr[iCnt];
        
        while(iNum > 0)
        {
            iDigit = iNum % 10;
            iNum = iNum / 10;
            
            iSum = iSum + iDigit;
        }

         printf("%d",iSum);
    }
   
}

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iLegnth = 0, iCnt = 0;
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
    Digits(iPtr,iLegnth);


    free(iPtr);     // Deallocate Memory

    return 0;
}
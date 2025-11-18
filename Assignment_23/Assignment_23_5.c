#include<stdio.h>
#include<stdlib.h>

int Product(int iArr[],int iLength)
{
    int iCnt = 0,iMul = 0; 
    
    // O(n)
     for(iCnt = 0,iMul = 1; iCnt < iLength; iCnt++)
     {
        iMul = iMul * iArr[iCnt];
     }
     return iMul;
} 

///////////////////////////////////////
//  MAIN FUNCTION
//////////////////////////////////////
int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int * iPtr;

    printf("Enter Number How much Element You want to Enter :\n ");
    scanf("%d",&iSize);

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
    iRet = Product(iPtr,iSize);
    
   printf("Product is : %d\n",iRet);  
    
    free(iPtr);     // Deallocate Memory
    
    return 0;
}
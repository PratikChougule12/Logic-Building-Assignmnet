#include<stdio.h> 

void DisplayASCII() 
{ 
    int iCnt = 0;
    for(iCnt = 0; iCnt<=255 ; iCnt++)
    {
        printf("%d\t%o\t%X\t%C\t\n",iCnt,iCnt,iCnt,iCnt);
       
    }
} 
    
int main() 
{ 
   
    DisplayASCII(); 
    return 0; 
}
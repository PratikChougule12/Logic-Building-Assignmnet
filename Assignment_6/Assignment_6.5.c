#include <stdio.h>
float Percentage (int iNo1,int iNo2)
{ 
    if(iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    if(iNo2 < 0)
    {
        iNo2 = -iNo2;
    }
     if(iNo2 == 0)
    {
        printf("Please Enter Valid marks and Try Agian \n");
        return -1.0;
    }
    float fPer = 0.0;
    fPer = ((float)iNo1 / iNo2)*100;
    return fPer;
}
int main() 
{
   int iValue1 = 0 , iValue2 = 0;
   float fRet = 0.0;
   
   printf("Enter Total Marks Obtained \n");
   scanf("%d",&iValue1);
   printf("Enter Total Marks \n");
   scanf("%d",&iValue2);
  
   fRet= Percentage(iValue1, iValue2);
   if(fRet != -1.0)
   {
      printf("Percentage is %f\n",fRet);
   } 
    return 0;
}
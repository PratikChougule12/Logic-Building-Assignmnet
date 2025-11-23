#include<stdio.h>
 void Display(int iRow, int iCol)
 {
    int i = 0, j = 0;
    char ch = 'A';
     
    for(i = 0; i < iRow; i++,ch++)
    {
        for(j = 0 ;j < iCol; j++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }

 }
int main()
{
    int iValue1 = 0, iValue2 = 0;

     printf("Enter the number of Rows and Coloumn : \n");
     scanf("%d %d",&iValue1, &iValue2);

     Display(iValue1,iValue2);

     return 0;
}
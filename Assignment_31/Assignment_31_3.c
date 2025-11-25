#include<stdio.h>

 void Display(int iRow, int iCol)
 {
    int i = 0, j = 0, iValue = 1;
     
     if(iRow != iCol)
        {
            printf("Invalid Input \n");
            printf("Row number and column number should be same\n");
            
            return -1;
        }

    for(i = 1; i <= iRow; i++)
    {  
        for(j = 1 ;j <= iCol; j++)
        {
            if(i<j)
            {
                printf("*\t");
            }
            else
            if(i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }
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
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iRowCount = 0, iColumnCount = 0;

    for(iRowCount = 1; iRowCount <= iRow ; iRowCount++)
    {
        for(iColumnCount = 1;iColumnCount <= iCol;iColumnCount++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number of Row And Columns:\n");
    scanf("%d %d",&iValue1, &iValue2);

    Display(iValue1,iValue2);

    return 0;
}
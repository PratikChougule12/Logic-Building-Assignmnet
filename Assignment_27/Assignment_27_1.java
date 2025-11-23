import java.util.*;

class Pattern
{
    public void display(int iRow, int iCol)
    {
        int iRowCount = 0, iColumnCount = 0;

            for(iRowCount = 1; iRowCount <= iRow ; iRowCount++)
                {
                    for(iColumnCount = 1;iColumnCount <= iCol;iColumnCount++)
                    {
                        System.out.print("*\t");
                    }
            System.out.println("");
                }
    }
}

class Assignment_27_1
{
    public static void main(String A[])
    {
        
        int iValue1 = 0, iValue2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Row :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Number of column:");
        iValue2 = sobj.nextInt();
    
        Pattern pobj = new Pattern();
        pobj.display(iValue1,iValue2);

    }
    
}
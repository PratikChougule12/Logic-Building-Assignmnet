import java.util.Scanner;

class Pattern
{
    public void display(int iNo)
    {
        int iCnt = 0;
        // Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        //O(n) 
        for(iCnt = iNo; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt+"\t*\t");
        }
        System.out.println();
    }
}

class Assignment_41_1
{
    public static void main(String A[])
        {
            int iValue = 0;

            Scanner sobj = new Scanner(System.in);
             
            System.out.println("Enter the Number :\n");
            iValue = sobj.nextInt();

            Pattern pobj = new Pattern();

            pobj.display(iValue);

        }
    
}

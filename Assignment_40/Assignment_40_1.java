import java.util.Scanner;

class Demo
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
        for(iCnt = 0; iCnt < iNo; iCnt++)
        {
            System.out.print("*\t");
        }
        System.out.println("");
    }
}

class Assignment_39_1 
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Frequency :");
        iValue = sobj.nextInt();

        Demo dobj = new Demo();

        dobj.display(iValue);
    }
    
}

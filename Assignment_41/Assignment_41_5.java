import java.util.Scanner;

class Pattern
{
    public int display(int iNo)
    {
        int iDigit = 0,iMul = 0;

        // Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        iMul = 1;                           // Reinitialiaze
        //O(n) 
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iMul = iMul * iDigit;
            iNo = iNo / 10;
        }      
    
        return iMul;
    }
}

class Assignment_41_5
{
    public static void main(String A[])
        {
            int iValue = 0, iRet = 0;

            Scanner sobj = new Scanner(System.in);
             
            System.out.println("Enter the Number :");
            iValue = sobj.nextInt();

            Pattern pobj = new Pattern();

           iRet = pobj.display(iValue);

           System.out.println("Multiplication of Digits :"+iRet);

        }
    
}

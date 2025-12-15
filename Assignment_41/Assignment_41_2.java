import java.util.Scanner;

class Pattern
{
    public int sumOfDigit(int iNo)
    {
        int iDigit = 0,iSum = 0;

        // Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        //O(n) 
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }      
    
        return iSum;
    }
}

class Assignment_41_2
{
    public static void main(String A[])
        {
            int iValue = 0, iRet = 0;

            Scanner sobj = new Scanner(System.in);
             
            System.out.println("Enter the Number :");
            iValue = sobj.nextInt();

            Pattern pobj = new Pattern();

           iRet = pobj.sumOfDigit(iValue);

           System.out.println("Sum od Digits :"+iRet);

        }
    
}

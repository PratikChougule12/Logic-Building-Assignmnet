import java.util.Scanner;

class Alphabate
{
 public boolean checkAlphabate(char ch)
{
    
        if((ch >= 'a')&& (ch <= 'z'))
        {
            return true;

        }
        else
        {
            return false;
        }
        
}
}
class Assignment_33_1
{
    public static void main(String A[])
    {
         char cValue = '\0';
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Character :");
        cValue = sobj.next().charAt(0);

        Alphabate aobj = new Alphabate();

        bRet = aobj.checkAlphabate(cValue);

        if(bRet == true)
        {
            System.out.println("It is Small character ");
        }
        else
        {
            System.out.println("It is not Small Characater");
        }
    
    }
}


   
  
    
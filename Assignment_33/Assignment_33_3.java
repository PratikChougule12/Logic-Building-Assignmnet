import java.util.Scanner;

class Alphabate
{
 public boolean checkCapital(char ch)
{
                //ASCII      ASCII
        if((ch >= 48)&& (ch <= 57) )
        {
            return true;

        }
        else
        {
            return false;
        }
        
}
}
class Assignment_33_2
{
    public static void main(String A[])
    {
        char cValue = '\0';
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Character :");
        cValue = sobj.next().charAt(0);

        Alphabate aobj = new Alphabate();

        bRet = aobj.checkCapital(cValue);

        if(bRet == true)
        {
            System.out.println("It is Digit");
        }
        else
        {
            System.out.println("It is not Digit");
        }
    
    }
}


   
  
    
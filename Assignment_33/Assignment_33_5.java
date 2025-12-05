import java.util.Scanner;

class Alphabate
{
 public void displaySchedule(char ch)
{
    
        
        if((ch == 'A') || (ch == 'a'))
        {
            System.out.println("Your Exam at 7:00 AM");

        }
        else
        if(ch == 'B' || (ch == 'b'))
        {
            System.out.println("Your Exam at 8:30 AM");
        }
         else
        if((ch == 'c')||(ch == 'c'))
        {
            System.out.println("Your Exam at 8:20 AM");
        }
        else
        if((ch == 'D')||(ch == 'd'))
        {
            System.out.println("Your Exam at 10:30 AM");
        }
        else
        {
            System.out.println("Division not exist");
        }
        
}
}
class Assignment_33_1
{
    public static void main(String A[])
    {
         char cValue = '\0';

        Scanner sobj = new Scanner(System.in);
    
        System.out.println("Enter Division :");
        cValue = sobj.next().charAt(0);

        Alphabate aobj = new Alphabate();

        aobj.displaySchedule(cValue);

    }
}


   
  
    
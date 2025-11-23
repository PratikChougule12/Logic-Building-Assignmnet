import java.util.*;

class Pattern
{
    public void display(int iNo)
    {
       int iCnt  = 0;
       char ch = 'A';

        for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)
        {
            System.out.printf("%c\n",ch);
            
        }
        System.out.println();
    }
}
class Assignment_26_1 
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter Number");
        iValue = sobj.nextInt();


        Pattern pobj = new Pattern();
        pobj.display(iValue);

    }
    
}
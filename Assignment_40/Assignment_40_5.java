import java.util.Scanner;

class Demo
{
    public void display(int iNo)
    {
        int iCnt = 0;
        char ch ='\0';

        //Updater
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        //Filter
        if(iNo > 26)
        {
            System.out.println("Exceeds limit");
            System.out.println("There are only 27 Alphabate please give input less than 26 and try again");
            return;
        }
        //O(n) 
        for(iCnt = 0, ch = 'a'; iCnt < iNo ; iCnt++,ch++)
        {
            System.out.printf(ch+"\t");
        }
        System.out.println("");
    }
}

class Assignment_40_5 
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

import java.util.*;

class StringX
{
    public int strlenX(String str)
    {
        int iCnt = 0, iCount = 0;

        char Arr[] = str.toCharArray();
        //O(n) 
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iCount++;
        }

        return iCount;
    }
}

class Assignment_41_3
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner scanobj = new Scanner(System.in);

        System.out.println("Enter string : ");
        String sobj = scanobj.nextLine();

        StringX strobj = new StringX();
        
        iRet = strobj.strlenX(sobj);

        System.out.println("Number of caharacter Present in String :"+iRet);
    }
}
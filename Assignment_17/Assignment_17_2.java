class Logic
{
   int iDigit = 0;
   int iRev = 0;
    
    
    void checkPalindrome(int num)
    { 
        
        while(1<=num)
        {
            iDigit = num % 10;
            num = num / 10;
        }
        iRev = iDigit;
        if(iRev==num)
        {
            System.out.println("The Number Is Palindrom");
        }
        else
        {
            System.out.println("The Number Is Palindrom");
        }
    }
}
//Time Complexity O(n)
class Assignment_17_2
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.checkPalindrome(121);

    }
}
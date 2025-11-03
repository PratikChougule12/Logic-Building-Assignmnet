class Logic
{
   int iDigit = 0;
    
    
    void reverseNumber(int num)
    { 
        
        while(1<=num)
        {
            iDigit = num % 10;
             System.out.print(iDigit);
            num = num / 10;
        }
    }
}
//Time Complexity O(n)
class Assignment_16_4
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.reverseNumber(1234);

    }
}
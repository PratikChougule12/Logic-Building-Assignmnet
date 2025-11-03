class Logic
{
   int iDigit = 0;
   int iEvenSum = 0;
   int iOddSum = 0;
    
    void sumOfEvenOddDigits(int num)
    {
        while(1<=num)
        {
             iDigit = num % 10;
            num = num / 10;
           if(iDigit%2==0)
           {
               iEvenSum = iEvenSum + iDigit;
           }
           else
           {
                iOddSum = iOddSum + iDigit;
           }
        }
        System.out.println("The Sum of Even Digits :"+iEvenSum);
        System.out.println("The Sum of Odd Digits :"+iOddSum);

    }
        
}
//Time Complexity O(n)
class Assignment_18_4
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.sumEvenOddDigits(123456);

    }
}

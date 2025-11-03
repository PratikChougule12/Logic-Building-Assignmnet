class Logic
{
    int iDigit = 0;
    int iMul = 0;
    void productDigits(int num)
    {
        iMul = 1;
       while(1<num)
       {
            iDigit=num % 10; 
            iMul = iMul * iDigit;
            num = num / 10;
       } 
       System.out.println(iMul);
    }
        
}
//Time Complexity O(n)
class Assignment_21_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.productDigits(9876);

    }
}

class Logic
{
    int iDigit = 0;
    int iMax = 0;
    void findLargestDigit(int num)
    {
       while(num > 0)
        {
            iDigit = num % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            num = num / 10;
        }
       System.out.println("Largest digit is: " + iMax);
    }
        
}
//Time Complexity O(n)
class Assignment_20_4
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.findLargestDigit(9876);

    }
}

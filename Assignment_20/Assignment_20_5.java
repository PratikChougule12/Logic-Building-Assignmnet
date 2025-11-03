class Logic
{
    int iDigit = 0;
    int iSmall = 0;

    void findSmallestDigit(int num)
    {
        iSmall = num % 10;
        num = num / 10;
         while(num > 0)
        {
            iDigit = num % 10;

            if(iDigit < iSmall)
            {
                iSmall = iDigit;
            }

            num = num / 10;
        }

        System.out.println("Smallest digit is: " + iSmall);
    }
}
//Time Complexity O(n)
class Assignment_20_5
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();

        lobj.findSmallestDigit(9876);
    }
}

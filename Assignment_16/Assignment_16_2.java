class Logic
{
    
    public void checkEvenOdd(int num)
    {
        if(num%2==0)
        {
            System.out.println("Number is Even");
        }
        else
        {
            System.out.println("Number is Odd");
        }
    }
        
}

class Assignment_16_2
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.checkEvenOdd(7);

    }
}
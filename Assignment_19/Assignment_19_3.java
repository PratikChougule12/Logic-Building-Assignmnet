class Logic
{
    void checkDivisiblity(int num)
    {
        
        if(num%5==0 && num%11==0)
        {
            System.out.println("Number is Divisible by 5 and 11");
        }
        else
        {
            System.out.println("Number is not Divisible ");
        }
    }
        
}

class Assignment_19_3
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.checkDivisiblity(55);

    }
}

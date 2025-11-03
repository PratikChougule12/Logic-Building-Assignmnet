class Logic
{
    void leapYear(int year)
    {
        
        if(year%4==0)
        {
            System.out.println("Year is Leap Year");
        }
        else
        {
            System.out.println("Year is not Leap Year ");
        }
    }
        
}

class Assignment_19_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.leapYear(2024);

    }
}

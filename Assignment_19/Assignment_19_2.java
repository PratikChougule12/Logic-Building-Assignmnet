class Logic
{
    void displayGrade(int marks)
    {
        
        if(marks < 34)
        {
            System.out.println("Fail");
        }
        else
        if(marks > 33  &&  marks <= 45)
        {
            System.out.println("Pass with Grade 'C'");
        }
        else
        if(marks > 45  &&  marks <= 55)
        {
            System.out.println("Pass with Grade 'B'");
        }
        else
        if(marks > 55  &&  marks <= 65 )
        {
            System.out.println("Pass with Grade 'B+'");
        }
        else
        if(marks > 65  &&  marks <= 75)
        {
            System.out.println("Pass with Grade 'A'");
        }
        else
        if(marks > 75  &&  marks <= 85)
        {
             System.out.println("Pass with Grade 'A+'");
        }
        else
        {
             System.out.println("Outstanding");
        }
    }
        
}

class Assignment_19_2
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.displayGrade(85);

    }
}

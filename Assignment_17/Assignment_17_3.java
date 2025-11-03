class Logic
{
   int iDigit = 0;
   int iRev = 0;
    
    
    void findMax(int a, int b)
    { 
        
        if(a>b)
        {
            System.out.println("Maximum Number is:"+ a);
        }
        else
        {
            System.out.println("Maximum Number is:"+ b);
        }
    }
}

class Assignment_17_3
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.findMax(20,25);

    }
}
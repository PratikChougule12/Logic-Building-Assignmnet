class Logic
{
   int iDigit = 0;
   int iRev = 0;
    
    
    void findMin(int a, int b, int c)
    { 
        
        if(a<b && a<c)
        {
            System.out.println("Minimum Number is:"+ a);
        }
        else
        if(b<a && b<c)
        {
            System.out.println("Mainimum Number is:"+ b);
        }
        else
        {
            System.out.println("Mainimum Number is:"+ c);
        }
    }
}

class Assignment_17_4
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.findMin(20,25,15);

    }
}
class Logic
{
   int iCount = 0;
    
    void printOddNumber(int num)
    {
        for(iCount=1; iCount<=num; iCount++)
        {
           if(iCount%2!=0)
           {
                System.out.println(iCount);
           }
        }
    }
        
}
//Time Complexity O(n)
class Assignment_18_3
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.printOddNumber(20);

    }
}

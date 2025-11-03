class Logic
{
   int iCount = 0;
   int iFreq = 0;
    
    void checkPrime(int num)
    {
        for(iCount=1; iCount<num; iCount++)
        {
           if(num%iCount==0)
           {
                iFreq++;
           }
        }
        if(iFreq==1)
        {
            System.out.println(num +"is Prime Number");
        }
        else
        {
              System.out.println(num +"is Prime Not Number");
        }
        
    }
}
//Time Complexity O(n)
class Assignment_18_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.checkPrime(5);

    }
}
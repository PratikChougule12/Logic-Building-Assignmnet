class Logic
{
    int iCount = 0;
    int iFact = 0;
    
    public void findFactorial(int num)
    {
        iFact = 1;
        for(iCount=num; 1<=iCount; iCount--)
        {
            iFact = iFact * iCount;
        }
        System.out.println(iFact);
    }
}
//Time Complexity O(n)
class Assignment_16_3
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.findFactorial(5);

    }
}
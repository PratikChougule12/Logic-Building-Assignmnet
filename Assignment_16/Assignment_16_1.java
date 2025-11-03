class Logic
{
    int iCount = 0;
    int iSum = 0;
    
    public void calculateSum(int n)
    {
        for(iCount=1; iCount<=n; iCount++)
        {
            iSum = iSum + iCount;
        }
        System.out.println("The sum of first Natual Number is :"+ iSum);
    }
}
//Time Complexity O(n)
class Assignment_16_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.calculateSum(10);

    }
}
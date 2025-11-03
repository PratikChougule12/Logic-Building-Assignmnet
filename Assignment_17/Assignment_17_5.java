class Logic
{
   int iCount = 0;
   int iTable = 0;
    
    public void printTable(int num)
    {
        for(iCount=1; iCount<=10; iCount++)
        {
            iTable = num * iCount;
            System.out.println(iTable);
        }
        
    }
}
//Time Complexity O(n)
class Assignment_17_5
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.printTable(5);

    }
}
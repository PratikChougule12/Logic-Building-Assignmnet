class Logic
{
    int iCnt = 0;
    void printDivisibleBy2And3(int iNum)
    {
       for(iCnt = 1; iCnt<=iNum;iCnt++)
       {
            if(iCnt%2==0 && iCnt%3==0 )
            {
                 System.out.println(iCnt);
            }      
       }
    }
}
//Time Complexity O(n)
class Assignment_21_5
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.printDivisibleBy2And3(30);

    }
}

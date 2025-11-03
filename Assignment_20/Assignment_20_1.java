class Logic
{
    int iCnt = 0;
    int iSum = 0;
    void sumOfEvennumbers(int iNum)
    {
       
       for(iCnt = 1; iCnt<=iNum;iCnt++)
       {
            if(iCnt%2==0)
            {
                 iSum = iSum +iCnt ;
            }
       }
       
       System.out.println(iSum);
    }
        
}
//Time Complexity O(n)
class Assignment_20_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.sumOfEvennumbers(10);

    }
}

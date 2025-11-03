class Logic
{
    int iDigit = 0;
    int iCnt = 0;
    int  iEvenFrequqncy = 0;
    int  iOddFrequqncy = 0;
    void countEvenOddRange(int num)
    {
       for(iCnt = 1; iCnt<=iNum;iCnt++)
       {
            if(iCnt%2==0)
            {
                 iEvenFrequqncy++ ;
            }
            else
            {
                 iOddFrequqncy++;
            }
       }
       System.out.println(iEvenFrequqncy);
       System.out.println(iOddFrequqncy);
    }
        
}
//Time Complexity O(n)
class Assignment_21_1
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.countEvenOddRange(50);

    }
}

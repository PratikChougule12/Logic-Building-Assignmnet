class Logic
{
    int iCnt = 0;
    int iDigit = 0;
    void printDigits(int iBase, int iExp)
    {
        iDigit = 1; 
       for(iCnt = 1; iCnt<=iExp;iCnt++)
       {
            iDigit = iDigit* iBase ;
       } 
       
       System.out.println(iDigit);
    }
        
}
//Time Complexity O(n)
class Assignment_19_5
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.printDigits(2,5);

    }
}

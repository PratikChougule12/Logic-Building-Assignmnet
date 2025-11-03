class Logic
{
    int iDigit = 0;
    void printDigits(int num)
    {
       while(1<num)
       {
            iDigit=num % 10;
            System.out.println(iDigit);
            
            num = num / 10;
       } 
       
    }
        
}
//Time Complexity O(n)
class Assignment_19_4
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.printDigits(9876);

    }
}

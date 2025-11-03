class Logic
{
    int iCnt = 0;
    void displayfactors(int iNum)
    {
       for(iCnt = 1; iCnt<=(iNum/2);iCnt++)
       {
            if(iNum%iCnt==0)
            {
                 System.out.println(iCnt);
            }      
       }
    }
}
//Time Complexity O(n/2)
class Assignment_21_3
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.displayfactors(12);

    }
}

class Logic
{
    int iFrequency = 0;
    int iCnt = 0;
    void countfactors(int iNum)
    {
       for(iCnt = 1; iCnt<=(iNum/2);iCnt++)
       {
            if(iNum%iCnt==0)
            {
                 iFrequency++;
            }      
       }
       System.out.println(iFrequency);
    }
}
//Time Complexity O(n/2)
class Assignment_21_4
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.countfactors(20);

    }
}

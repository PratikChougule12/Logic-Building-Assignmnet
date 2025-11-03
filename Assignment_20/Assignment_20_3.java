class Logic
{
    int iCnt = 0; 
    int iSum = 0;
    void checkPerfect(int iNum)
    {
       
       for(iCnt = 1; iCnt < iNum;iCnt++)
       {
            if(iNum%iCnt==0)
            {
                iSum = iSum + iCnt;
            }    
       }
       if(iSum==iNum)
       {
            System.out.println("Number is Perfect");
       }
       else
       {
             System.out.println("Number is not Perfect");
       }
    }
        
}
//Time Complexity O(n)
class Assignment_20_3
{
    public static void main(String A[])
    {
         Logic lobj = new Logic();

        lobj.checkPerfect(10);

    }
}

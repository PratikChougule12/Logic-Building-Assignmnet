class Demo
{
    public void display(int iNo)
    {
        int iCnt = 0;
        //O(n) 
        for(iCnt = iNo; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt+"\t");
        }
        System.out.println("");
    }
}

class Assignment_39_3 
{
    public static void main(String A[])
    {
        int iValue = 5;

        Demo dobj = new Demo();

        dobj.display(iValue);
    }
    
}

class Demo
{
    public void display(int iNo)
    {
        int iCnt = 0;
        char ch ='\0';
        //O(n) 
        for(iCnt = 0, ch = 'a'; iCnt < iNo ; iCnt++,ch++)
        {
            System.out.printf(ch+"\t");
        }
        System.out.println("");
    }
}

class Assignment_39_5 
{
    public static void main(String A[])
    {
        int iValue = 5;

        Demo dobj = new Demo();

        dobj.display(iValue);
    }
    
}

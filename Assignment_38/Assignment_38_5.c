void StrCpyToggle(char *src,char * dest)
{
     
    while (*src != '\0')
    {
                if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src + ('a' - 'A');
        }
    
        else if (*src >= 'a' && *src <= 'z')
        {
            *dest = *src - ('a' - 'A');
        }
        else
        {
            *dest = *src;  

        src++;
        dest++;
    }

    *dest = '\0';       
}
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];           //Empty string

    StrCpyToggle(arr,brr);

    printf("%s",brr);      //mARVELLOUS pYHTHON 2

    return 0;
}

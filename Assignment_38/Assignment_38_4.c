void StrCpySmall(char *src,char * dest)
{
      while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')   // If CAPITAL letter
        {
            *dest = *src + ('a' - 'A');   // Convert to small letter
        }
        else
        {
            *dest = *src;                 // Copy other characters as they are
        }

        src++;
        dest++;
    }


    *dest = '\0';       
}
int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];           //Empty string

    StrCpySmall(arr,brr);

    printf("%s",brr);      //marvellous python 2

    return 0;
}

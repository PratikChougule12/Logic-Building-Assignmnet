void StrCpyRev(char *src,char * dest)
{
    char *start = src;
    char *end = src;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    
    while (end >= start)
    {
        *dest = *end;
        dest++;
        end--;
    }

    *dest = '\0'; 
}
int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];           //Empty string

    StrCpyRev(arr,brr);

    printf("%s",brr);      //nohtyP suollevraM

    return 0;
}

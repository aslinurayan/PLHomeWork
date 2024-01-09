#include <stdio.h>
#include <string.h>

char *ReadNLine(char *str3, int n)
{
    char ch;
    char *p = str3;
    while (n-- > 0)
    {
        if((ch = getchar()) == '\n') break;
        *p++ = ch;
    }
    *p =  '\0';
    return str3;
}
int main()
{
    char str3[80] ; 
    char *p = NULL;
    p = ReadNLine(str3, 79);
    printf("Entered row = <%s>\n", p);
    //string array has always null character (str[8] has 8 - 1 = 7 character)
    //char *str = "abc" (READ-ONLY and cannot change )
    //char str[] = "abc" (you can change)

    // char str[] = "It is my first string";
    // puts(str); //for next line
    // printf("%s\n", str);
    // printf("%40s\n", str); //40 spaces and write right
    // printf("%-40s", str); //40 spaces and write left
    // printf("%.10s\n", str); // for just first 10 chracthers
    // printf("%40.10s\n", str);

    // char str2[80];
    // scanf("%s",str2); //if there is any space it stops
    // printf("%s\n" , str2);

    return 0;
}

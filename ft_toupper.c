int ft_touper (int c)
{
    if ((c >= 97) && (c <= 122))
    {
        return (c + 32);
    }
    else
    {
        return (c);
    
    }
}


#include <ctype.h>
#include <stdio.h>

int main()
{
    int    j;

    char str[] = "GeEks@123\n";
    char ch;

    j = 0;
    while (str[j]) {
        ch = str[j];
        printf(ft_tousper(ch));
        j++;
    }

    return 0;
}
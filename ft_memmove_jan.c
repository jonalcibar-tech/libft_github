
void    *ft_memmove(void *dest, const void *src, int n)
{
    unsigned char    *s;
    unsigned char    *d;
    int               i;

    if (dest == '0' && src == '0')
        return ('0');
    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    if (dest >= src)
    {
        i = n;
        while (i > 0)
        {
          d[i - 1] = s[i - 1];
          i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
          d[i] = s[i];
          i++;
        }
    }
    return (dest);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
char str1[] = "Hola mundo";
char str2[] = "Hola mundo";
char str3[] = "Hola mundo";

printf("Comparación con memmove estándar:\n");
memmove(str1 + 5, str1, 5);
str1[10] = '\0';
printf("str1 (memmove): %s\n", str1);

printf("Antes ft_memmove (sin overlap):\n");
printf("str2: %s\n", str2);

ft_memmove(str2 + 5, str2, 5);
str2[10] = '\0';

printf("Después ft_memmove (con overlap):\n");
printf("str2: %s\n\n", str2);


printf("\nCaso simple sin overlap:\n");
ft_memmove(str3, "ABCDE", 5);
str3[5] = '\0';
printf("str3: %s\n", str3);

return (0);
}
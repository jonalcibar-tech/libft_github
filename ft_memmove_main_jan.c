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
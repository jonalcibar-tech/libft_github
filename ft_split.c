#include "libft.h"
size_t ft_countwor(char const *s, char c)
// funciona contando palabras pero no las mide
{
    size_t iwords;
    size_t i;
    size_t inword;

    if (s == NULL)
        return(0);
    iwords = 0;
    i = 0;
    inword = 1;
    while (s[i])
    {
        if(s[i] != c && inword == 0)
        {
            iwords++;
            inword = 1;
        }
        else if (s[i] == c)
          inword = 0;
        i++;
    }
    return(iwords);
}
static char	**ft_split(char const *s, char c)
{
	char	**matrix;

	matrix = malloc((ft_countwords(s,c) + 1) * sizeof(char *));
	if (!matrix)
      return (NULL);
	ft_fillpoint()
}
int	main(void)
{
	const char *s = ",Hola,,, mundo,,";
	char  c;

	c = ',';
	printf("%zu", ft_countwords(s, c));
	//printf("%p?", ft_split(s, c));
	return(0);
}
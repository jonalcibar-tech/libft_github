#include "libft.h"
size_t ft_wordsnr(char const *s, char c)
// funciona contando palabras pero no las mide
{
	size_t	iwords;
	size_t	i;

	if (s == NULL)
		return(0);
	iwords = 0;
	i = 0;
	while (s[i])
		iwords+= (s[i++] == c);
	return(iwords);
}
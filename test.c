#include	"libft.h"

static size_t ft_wordsnr(char const *s, const char *c)
{
    size_t iword;
    size_t i;
    size_t inword;

    if (s == NULL)
        return(0);
    iword = 0;
    i = 0;
    inword = 1;
    while (s[i])
    {
        if(s[i] != *c && inword == 0)
        {
            iword++;
            inword = 1;
        }
        else if (s[i] == *c)
          inword = 0;
        i++;
    }
    return(iword);
}

static	size_t	ft_start(char const *s1, char const *set)
{
	size_t	begin;
	size_t	iset;
	size_t	is1;

	iset = 0;
	is1 = 0;
	begin = 0;
	while (s1[is1])
	{
		while (set [iset])
		{
			if (s1[is1] == set[iset])
			{
				begin++;
				iset = 0;
				break;
			}
			iset++;
		}
		is1++;
	}
	return (begin);
}

static	size_t	ft_end(char const *s1, char const *set, size_t wordsnr)
{

}


int	main(void)
{
	const char *s = ",,,Hola,,,g,,,h,";
	const char  *c = ",";
	size_t		wordsnr;

	wordsnr = ft_wordsnr(s, c);

	printf("%zu, %zu, %zu", wordsnr, ft_start(s, c), ft_end(s,c, wordsnr));
	//printf("%p?", ft_split(s, c));
	return(0);
}
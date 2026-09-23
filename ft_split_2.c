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

static	size_t	ft_start(char const *s, char const *c, size_t wordnr)
{
	size_t iword;
    size_t i;
    size_t inword;

    if (s == NULL)
        return(0);
    while iword < wordnr
}

static	size_t	ft_end(char const *s1, char const *set, size_t wordnr)
{

}


int	main(void)
{
	const char *s = ",,Hola,,,mundo,,,h,p,";
	const char *c = ",";
	size_t		iword = 3;
	size_t		wordsnr;

	wordsnr = ft_wordsnr(s, c);

	printf("%zu, %zu, %zu", wordsnr, ft_start(s, c, iword), ft_end(s, c, iword));
	//printf("%p?", ft_split(s, c));
	return(0);
}
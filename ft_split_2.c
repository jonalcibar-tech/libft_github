/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:49:56 by jalcibar          #+#    #+#             */
/*   Updated: 2026/09/16 19:06:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

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
				break ;
			}
			iset++;
		}
		is1++;
	}
	return (begin);
}

static	size_t	ft_end(char const *s1, char const *set)
{
	size_t	end;
	size_t	iset;
	size_t	is1;

	iset = 0;
	is1 = ft_strlen(s1) - 1;
	end = ft_strlen(s1) - 1;
	while (set[iset])
	{
		while (s1[is1])
		{
			if (s1[is1] != set[iset])
				break ;
			end--;
			is1--;
		}
		iset++;
	}
	return (end + 1);
}

static size_t ft_wordsnr(char const *s, char c)
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
        if(s[i] != c && inword == 0)
        {
            iword++;
            inword = 1;
        }
        else if (s[i] == c)
          inword = 0;
        i++;
    }
    return(iword);
}

static void *ft_wstart(char const *s, char c, size_t wnmber)
{
    size_t iword;
    size_t i;
    size_t inword;

    if (s == NULL)
        return(0);
    iword = wnmber;
    i = 0;
    inword = 1;
    while (s[i])
    {
        if(s[i] != c && inword == 0)
        {
			return(&s[i]);
        }
        else if (s[i] == c)
          inword = 0;
        i++;
    }
    return('NULL');
}

void char **ft_split(char const *s, char c)
{
    size_t	iword;
    size_t	iword;
    char	**matrix;

    iword = 0;
	ileter = 0;
    **matrix = malloc((ft_wordsnr(s,c) + 1) * sizeof(char *));
	if (!matrix)
    	return (NULL);
    while (iword < ft_wordsnr(s,c))
		{
		matrix[iword] = malloc((ft_strlen (&matrix[iwords]) + 1) * sizeof(char));
		
		}
    matrix[iword] = (NULL);
    return (0);
}
int	main(void)
{
	const char *s = ",,,Hola,,,mundo,,,";
	char  c;

	c = ',';
	printf("%zu %p", ft_wordsnr(s, c), ft_start(s, c, 0));
	//printf("%p?", ft_split(s, c));
	return(0);
}
/*
s: La cadena que se va a dividir.
c: El carácter delimitador.
Devuelve el array de nuevas cadenas resultante de la división.
NULL si falla cualquier reserva de memoria.
La estructura devuelta debe liberarse utilizando:
1) free() sobre cada cadena del arreglo;
2) free() sobre el arreglo.
Funciones autorizadas
malloc, free
*/
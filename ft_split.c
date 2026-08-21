/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:49:56 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/21 13:09:43 by jalcibar         ###   ########.fr       */
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
// funciona contando palabras pero no las mide
{
	size_t	countwords;
	size_t	i;

	if (s == NULL)
		return(0);
	countwords = 0 + (s[0] != 0);
	i = 0;
	while (s[i])
		countwords+= (s[i++] == c);
	return(countwords);
}



char	**ft_split(char const *s, char c)
{
	char	**matrix;
	size_t	ipoint;
	size_t	iword;
	size_t	start;
	size_t	end;

	matrix = malloc((wordsnr(s, c) + 1) * sizeof (char *));
	if (!matrix)
		return NULL;
	iword = 0;
	while (ipoint <= wordsnr(s, c))
	{
		start = ft_start(s, c);
		end = ft_end(s, c);
		matrix[iword] == malloc((end - start) * sizeof (char));
			return (NULL);
		*matrix[iword] = fillword(*matrix[iword], start, end - start);
		iword++;
	}
	*matrix[iword] = 'NULL';
}

int	main(void)
{
	const char *s = NULL;
	char  c;

	c = ' ';
	printf("%zu", ft_wordsnr(s, c));
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
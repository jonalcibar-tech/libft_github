/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 09:49:56 by jalcibar          #+#    #+#             */
/*   Updated: 2026/09/03 11:57:14 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
/*
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
*/
/*
static void *ft_wstart(char const *s, char c, size_t wnmber)
{
    size_t iwords;
    size_t i;
    size_t inword;

    if (s == NULL)
        return(0);
    iwords = wnmber;
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
    return(iwords);
}
*/

/*
static char	**ft_split(char const *s, char c)
{
    size_t	leters;
    size_t	iwords;
    size_t	ileters;
    char	**matrix;


    leters = 4;
    iwords = 0;
    ileters = 0;
    matrix = malloc((ft_wordsnr(s,c) + 1) * sizeof(char *));
	if (!matrix)
      return (NULL);
    while (iwords < ft_wordsnr(s,c))
    {
		matrix[0][iwords] = ft_wstart(s, c, iwords)
	   	
		matrix[iwords] = malloc((ft_strlen (matrix[iwords]) + 1) * sizeof(char));
		if (!matrix[iwords])
        	return (NULL);
		while (matrix[iwords])
			matrix[iwords] = //puntero a primer caracter de palabra;
    iwords++;
    ileters = 0;
    }
    matrix[iwords] = (NULL);
    return (0);
}
*/
int	main(void)
{
	const char *s = ",,,Hola,,,mundo,,,";
	char  c;

	c = ',';
	printf("%zu %p", ft_wordsnr(s, c), ft_start(s, c));
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
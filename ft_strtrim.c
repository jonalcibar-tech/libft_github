/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 08:45:05 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/14 12:28:38 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	begin = ft_start(s1, set);
	end = ft_end(s1, set);
	len = end - begin;
	if (len == 0)
		return (ft_strdup(""));
	return (ft_substr(s1, begin, len));
}
/*
int	main (void)
{
	char const s1[] = "HOLA";
	char const set[] = " ";
	printf("%s", ft_strtrim(s1, set));
}
*/
/*
Parámetros s1: La cadena de caracteres que debe ser recortada.
set: Los caracteres a eliminar de la cadena en cuestión.
Valor devuelto: una copia de ‘s1’ con los caracteres de ‘set ’
eliminados al principio y al final.
NULL si falla la reserva de memoria.
Reserva memoria (con malloc(3))
*/
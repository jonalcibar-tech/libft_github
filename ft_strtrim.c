/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 08:45:05 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/10 13:21:25 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t ft_start(char const *s1, char const *set)
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
	return(begin);
}
static	size_t ft_trimend(char const *s1, char const *set)
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
				break;
		end--;
		is1--;
		}
	iset++;
	}
	return(end);
}
char *ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	len;
	size_t	trimend;

	if (!s1 || !set)
		return ft_strdup("");
	begin = ft_start(s1, set);	
	trimend = ft_trimend(s1, set) + 1;
	len = trimend - begin;
	printf("%zu %zu %zu\n", begin, trimend, len);

	return (ft_substr(s1, begin, len));
}
/*
int	main (void)
{
	char const s1[] = "HOLAHOLAMUNDO";
	char const set[] = "HOLA";
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
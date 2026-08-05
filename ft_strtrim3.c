/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 08:45:05 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/05 11:30:57 by jalcibar         ###   ########.fr       */
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
	while (set[iset])
	{	
		while (s1[is1])
		{
			if (s1[is1] != set[iset])
				break;
		begin++;
		is1++;
		}
	iset++;
	}
	return(begin);
}
/*
char *ft_strtrim(char const *s1, char const *set)
{
	if (!s1 || !set)
        return (NULL);
	start = static start (s1, set);
	//len
	return (ft_substr(s1, start, len));
}
*/
int	main (void)
{
	char const s1[] = "HOLA MUNDO";
	char const set[] = "HO";

	printf("%zu", ft_start(s1, set));
}

/*
Parámetros s1: La cadena de caracteres que debe ser recortada.
set: Los caracteres a eliminar de la cadena en cuestión.
Valor devuelto: una copia de ‘s1’ con los caracteres de ‘set ’
eliminados al principio y al final.
NULL si falla la reserva de memoria.
Reserva memoria (con malloc(3))
*/
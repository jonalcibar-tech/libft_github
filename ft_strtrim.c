/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 08:45:05 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/03 13:21:43 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *trimfwd(char , char )
{
	
}
char *ft_strtrim(char const *s1, char const *set)
{
	char 	*temp;
	size_t	counttemp;
	size_t	countset;

	*temp = ft_strdup (s1);

	counttemp = 0;
	countset = 0;
	while (temp [counttemp]);
	{
		while (set[countset]);
		{
			temp = trimfowd(&temp, set[countset]);
			temp = trimback(&temp, set[countset]);
		}
	}
	return (temp);
}
int	main(void)
{
	char const *s1[] = "HOLA MUNDO";
	char const *set[] = "HO";

	printf("%s", ft_strtrim, s1, set);
}

/*
Parámetros s1: La cadena de caracteres que debe ser recortada.
set: Los caracteres a eliminar de la cadena en cuestión.
Valor devuelto: una copia de ‘s1’ con los caracteres de ‘set ’
eliminados al principio y al final.
NULL si falla la reserva de memoria.
Reserva memoria (con malloc(3))
*/
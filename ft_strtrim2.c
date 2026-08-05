/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 08:45:05 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/05 11:28:36 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	//size_t	start;
	//size_t	len;
	
	if (!s1 || !set)
        return (NULL);
	//start = strnstr(s1, set, ft_strlen(set));
	//len =ft_strlen(s1) - start;
	return (ft_substr(s1, start, len));
}
int	main (void)
{
	char const s1[] = " HOLA MUNDO";
	char const set[] = "HO";

	printf("%s", ft_strtrim(s1, set));
}

/*
Parámetros s1: La cadena de caracteres que debe ser recortada.
set: Los caracteres a eliminar de la cadena en cuestión.
Valor devuelto: una copia de ‘s1’ con los caracteres de ‘set ’
eliminados al principio y al final.
NULL si falla la reserva de memoria.
Reserva memoria (con malloc(3))
*/
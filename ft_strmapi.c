/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:57:03 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/02 15:26:17 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *upper(char const *s, unsigned int pos)
{
	size_t	i;
	char	*s_upper;

	s_upper = malloc(ft_strlen(s)* sizeof(char));
	if (!s_upper)
		return(NULL);
	i = 0;
	while (s[i])
	{	
		if ((i == pos) && (s[i] >= 97) && (s[i] <= 122))
		{
		s_upper[i] = s[i]-32;
		}
		else
		{
		s_upper[i] = s[i];
		}
	i++;
	}
	s_upper[i] = '\0';
	return (s_upper);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int pos, char s))
{
	return f(pos)
}

int	main(void)
{
	char const	*s = "lola";
	unsigned int pos;

	printf("%c", ft_strmapi(s, upper));
}
/*
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
s: La cadena sobre la que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto La cadena creada tras el correcto uso de ‘f’ sobre cada carácter.
NULL si falla la reserva de memoria.
Funciones autorizadas malloc
Descripción Aplica la función ‘f’ a cada carácter de la cadena
‘s’, pasando su índice como primer argumento y el propio carácter como segundo
argumento. Se crea una nueva cadena (utilizando malloc(3)) para almacenar
los resultados de las sucesivas aplicaciones de ‘f’.
*/
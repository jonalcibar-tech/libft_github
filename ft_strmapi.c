/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:57:03 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/07 08:04:09 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
static char	upper(unsigned int pos, char s)
{
	if ((pos == 1) && (s >= 'a') && (s <= 'z'))
	{
		return (s - 32);
	}
	else
	{
		return (s);
	}
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int pos, char c))
{
	unsigned int	i;
	char			*s_upper;

	if (s == NULL || (*f) == NULL)
		return (NULL);
	s_upper = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!s_upper)
		return (NULL);
	i = 0;
	while (s[i])
	{
		s_upper[i] = (*f)(i, s[i]);
		i++;
	}
	s_upper[i] = '\0';
	return (s_upper);
}
/*
int	main(void)
{
	char const		*s = "pedro";

	printf("%s", ft_strmapi(s, upper));
}
*/
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
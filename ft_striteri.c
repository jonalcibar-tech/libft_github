/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 08:28:14 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/07 11:08:44 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
static void	upper(unsigned int pos, char *s)
{
	if ((pos == 0) && (*s >= 'a') && (*s <= 'z'))
		*s = (*s - 32);
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int pos, char *c))
{
	unsigned int	i;

	if (s == NULL || (*f) == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
int	main(void)
{
	char	s[] = "pedro";

	ft_striteri(s, upper);
	printf("%s", s);
}
*/
/*
void ft_striteri(char *s, void (*f)(unsigned int,char*));
s: La cadena sobre la que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto Nada
Funciones autorizadas
Ninguna
Descripción Aplica la función ‘f’ a cada carácter de la string
‘s’, pasando como parámetros el índice de cada
carácter dentro de ‘s’ y la dirección del propio
carácter, que puede modificarse si es necesario.
*/
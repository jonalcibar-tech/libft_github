/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:33:50 by jalcibar          #+#    #+#             */
/*   Updated: 2026/09/25 17:41:05 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static size_t ft_len(long n)
{
	size_t	len;
	size_t  i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		{
			n = -n;
			i++;
		}
	if (n < 1)
		i++;
	while (n)
		{
			n /= 10;
			i++;
		}
	return (i);
}


char	*ft_itoa(int n)
{
	long	n_long;
	size_t	n_len;
	char	*n_string;
	size_t	i;

	n_long = n;
	
	//cuenta nº caracteres de string considera 0s y '-', no hay funcion que lo haga
	n_len = ft_len(n_long),
	n_string = malloc(((n_len)+ 1) * sizeof(char));
	if(!n_string)
		return (NULL);
	i = n_len + 1;
	n_string[i] = '\0';
	while (i)
	{	
			n_string[i] = n/(10*i);
			i--;
	}
	n_string[i] = '\0';
	return (n_string);
	
	//reserva memoria para ello + NULL y devuelve NULL si no lo logra
	//copia caracter por caracter ¿dcha a izq?
	//libera la memoria.
}


int	main(void)
{
	long	n;
	n =	-123456;

	printf("%s", ft_itoa(n));
}

/*
char *ft_itoa(int n);
Reserva memoria (utilizando malloc(3)) y devuelve
una cadena que represente el valor del número
entero recibido como argumento. Debe ser capaz de
manejar números negativos.
*/
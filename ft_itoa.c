/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:33:50 by jalcibar          #+#    #+#             */
/*   Updated: 2026/09/25 13:19:38 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_itoa(int n)
{
	//cuenta nº caracteres de string considera 0s y '-', no hay funcion que lo haga
	

	//reserva memoria para ello + NULL y devuelve NULL si no lo logra
	//copia caracter por caracter ¿dcha a izq?
	//libera la memoria.
}

int	main(void)
{
	int	n;
	n =	5;

	printf("%s", ft_itoa(n));
}

/*
char *ft_itoa(int n);
Reserva memoria (utilizando malloc(3)) y devuelve
una cadena que represente el valor del número
entero recibido como argumento. Debe ser capaz de
manejar números negativos.
*/
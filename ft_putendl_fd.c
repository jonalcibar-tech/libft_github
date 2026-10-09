/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 08:50:04 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/09 09:25:52 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		write (fd, (const void *)s, ft_strlen((const char *)s));
		write (fd, "\n", 1);
	}
}
/*
int main(void)
{
	char	str[] = "LOLA";

	ft_putendl_fd(str, 1);
	return(0);
}
*/
/*
void ft_putendl_fd(char *s, int fd);

Parámetros s: La cadena a enviar.
fd: El descriptor de archivo sobre el que escribir.
Valor devuelto Nada
Funciones autorizadas write
Envía la cadena ‘s’ al descriptor de archivo dado, seguido de un salto de línea.
*/
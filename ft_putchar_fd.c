/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 10:45:14 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/08 11:18:00 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main (void)
{
	ft_putchar_fd('J', 1);
	return (0);
}
*/
/*
Nombre de función
ft_putchar_fd
Prototipo void ft_putchar_fd(char c, int fd);
Archivos a entregar
-
Parámetros c: El carácter a enviar.
fd: El descriptor de archivo sobre el que escribir.
Valor devuelto Nada
Funciones autorizadas
write
Descripción Envía el carácter ‘c’ al descriptor de archivo
(file descriptor ) especificado.*/
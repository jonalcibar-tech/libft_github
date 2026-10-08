/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 11:35:42 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/08 13:43:58 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write (fd, s, strlen ((const char *)s));
}
/*
int main(void)
{
	char	str[] = "LOLA";

	ft_putstr_fd(str, 1);
}
*/
/*
ft_putstr_fd
Prototipo void ft_putstr_fd(char *s, int fd);
Archivos a entregar
-
Parámetros s: La cadena a enviar.
fd: El descriptor de archivo sobre el que escribir.
Valor devuelto Nada
Funciones autorizadas
write
Descripción Envía la cadena ‘s’ al descriptor de archivo
especificado.
*/
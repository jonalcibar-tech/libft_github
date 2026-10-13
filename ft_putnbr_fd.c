/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 09:23:48 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/13 13:30:48 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nstr;

	if (fd < 0)
		return ;
	nstr = ft_itoa(n);
	write(fd, nstr, ft_strlen((const char *)nstr));
	free(nstr);
}
/*
int	main(void)
{
	int	n = -2345;
	int fd = 1;
	ft_putnbr_fd(n, fd);
	return(0);
}
*/
/*
void ft_putnbr_fd(int n, int fd);
n, el número entero que se envía.
fd, el descriptor de archivo sobre el que escribir.
Valor devuelto Nada, Funciones autorizadas write
Descripción Escribe el número entero ‘n’ en el descriptor de
archivo dado.
*/
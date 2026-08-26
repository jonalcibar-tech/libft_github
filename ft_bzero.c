/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/08/26 08:44:34 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	count;
	char	*temp;

	temp = (char *) s;
	count = 0;
	while (count < n)
	{
		temp [count] = '\0';
		count++;
	}
}
/*
int	main(void)
{
	char	string[] = "hola";
	
	printf("%s\n", string);
	ft_bzero(string, strlen(string));
	printf("%s\n", string);
	return (0);
}
*/
/*
The  bzero()  function  erases  the  data  in the n bytes of the memoryrting
at the location pointed to by s, by writing zeros (bytes  containing '\0')
to that area.
*/

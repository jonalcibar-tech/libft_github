/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/28 09:44:13 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	count;
	char	*temp;

	temp = (char *) s;
	count = 0;
	while (count < n)
	{
		temp [count] = (char) c;
		count++;
	}
	return (s);
}
/*
#include	<stdio.h>

int	main(void)
{
	char	string[]= "hola";
	
	printf("%s\n", string);
	ft_memset(string, '1', 5);
	printf("%p\n", ft_memset(string, '1', 5));
	printf("%s\n", string);
	printf("%p\n", ft_memset(string, '2', 5));
	printf("%s\n", string);

	return (0);

	//memset - fill memory with a constant byte, #include <string.h>
	//void *memset(void *s, int c, size_t n);
	//The  memset()  function  fills  the  first  n  bytes of the memory area
	//pointed to by s with the constant byte c.
	//he memset() function returns a pointer to the memory area s.
}
*/

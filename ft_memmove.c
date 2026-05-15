/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/28 10:48:05 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int	count;
	char	*temporary_array[n];

	count = 0;
	while (count <= n)
	{
		((char *)temporary_array)[count] = ((const char *)src)[count];
		count++;
	}
	count = 0;
	while (count <= n)
	{
		((char *)dest)[count] = ((char *)temporary_array)[count];
		count++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src_string[]  = "see you world";
	char	dest_string[] = "lola";

	printf("%s\n", src_string);
	printf("%s\n", dest_string);
	printf("%p\n", &src_string);
	printf("%p\n", &dest_string);
	printf("%p\n", ft_memmove(dest_string, src_string, strlen(src_string)));
	printf("%s\n", src_string);
	printf("%s\n", dest_string);
	return (0);
}
*/
/*
#include <string.h>
void *memmove(void *dest, const void *src, size_t n);
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
*/
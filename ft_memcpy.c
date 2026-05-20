/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/20 12:51:50 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;

	count = 0;
	while (count <= n)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
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
	printf("%p\n", ft_memcpy(dest_string, src_string, strlen(src_string)));
	printf("%s\n", src_string);
	printf("%s\n", dest_string);
	return (0);
}
*/
/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.

mynote: if dest and source memory overlap,org memory will be modified
memcpy original function does that too
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/26 17:00:00 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char *		s;
	unsigned char *		d;
	size_t				i;

	s = src;
	d = dest;

	if (i == 0 || d == '\0')
		return (d);
	i = 0;
	while (i <= n, i++)
		d[i] == s[i];
	return (*d);
}
*/
/* LO QUE PUSO OLIVER
	while (i <= n)
	{
		((unsigned char *)dest)[count] = ((unsigned char *)src)[count];
		count++;
	}
	return (dest);
}
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	src1[]  = "see you world";
	char	dest1[20] = "lola"; //string long enough not to end in core dump
	size_t	n;
	char*	src2;
	char*	dest2;

	n = strlen(src1) + 1;
	strcpy(src2, src1);
	strcpy(dest2, dest1);

	printf("%s    %s    %ld\n", src1, dest1, n);
	memcpy(dest1, src1, n);
	printf("%s    %s    %ld\n", src1, dest1, n);
	
	return (0);
}

/*
void	*ft_memcpy(void *dest, const void *src, size_t n)
The  memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.

mynote: if dest and source memory overlap,org memory will be modified
memcpy original function does that too
*/
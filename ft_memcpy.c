/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 13:07:18 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/29 16:22:08 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char		*s;
	unsigned char	*d;
	size_t			i;

	s = (const char *) src;
	d = (unsigned char *) dest;
	i = 0;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char	src1[]  = "1234";
	char	dest1[] = "abcdef"; //string long enough not to end in core dump
	size_t	n;
	const char	src2[]  = "1234";
	char	dest2[] = "abcdef"; 

	// strcpy (src2, src1);
	// strcpy (dest2, dest1);
	n =  10; //strlen(src1) + 1;

	printf("%s    %s    %ld\n\n", src1, dest1, n);
	memcpy(dest1, src1, n);
	printf("%s    %s-\n", src1, dest1);

	ft_memcpy(dest2, src2, n);
	printf("%s    %s-\n", src2, dest2);
	
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
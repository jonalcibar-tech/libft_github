/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/27 13:03:00 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
#include 	<stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char*			s;
	unsigned char*		d;
	size_t				i;

	s = (const char*)src;
	d = (unsigned char*)dest;
	i = n;

	//printf("i= %lu  d[i]= %c\n", i, d[i]);

	if (i == 0 || d[0] == '\0')
		return (d);
	i = 0;
	while (i <n && s[i] != '\0')
	{
		d[i] = s[i];
		printf("i=%lu s[i]=%c d[i]=%c     ", i, s[i], d[i]); 
		i++;
	}
	printf("\n");
	d[i] = '\0';
	return (d);
}

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
	const char	src1[20]  = "see you world";
	char	dest1[20] = "lola"; //string long enough not to end in core dump
	size_t	n;
	char	src2[20] ;
	char	dest2[20];

	strcpy (src2, src1);
	strcpy (dest2, dest1);
	n =  2; //strlen(src1) + 1;

	printf("%s    %s    %ld\n", src1, dest1, n);
	memcpy(dest1, src1, n);
	printf("%s    %s-\n\n", src1, dest1);

	printf("%s    %s    %ld\n", src2, dest2, n);
 	ft_memcpy(dest2, src2, n);
	printf("%s    %s-\n\n", src2, dest2);
	
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_long.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/01 12:07:05 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*temporary_array[n];
	
	if ((src == NULL && dest == NULL) || (n == 0))
		return (dest);
	count = 0;
	while (count <n)
	{
		((char *)temporary_array)[count] = ((const char *)src)[count];
		count++;
	}
	count = 0;
	while (count < n)
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
	const char	src1[]  = "1234";
	char		dest1[] = "abcdef";
	size_t	n;
	const char	src2[]  = "1234";
	char	dest2[] = "abcdef"; 

	n =  10;
	printf("%s    %s    %ld\n\n", src1, dest1, n);
	memmove(dest1, src1, n);
	printf("%s    %s-\n", src1, dest1);

	ft_memmove(dest2, src2, n);
	printf("%s    %s-\n", src2, dest2);
	
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
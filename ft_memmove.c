/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/01 18:05:30 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*s;
	unsigned char	*d;
	int				i;

	s = (const char *) src;
	d = (unsigned char *) dest;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = n - 1;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int main(void)
{
//	char		src1[]  = "lorem ipsum dolor sit amet";
		char		src1[]  = "hjffgsdgfdhsfgsdhfg";

	char		*dest1;
	size_t		n;
	char		src2[]  = "lorem ipsum dolor sit amet";
	char		*dest2;
	
	dest1 = src1 + 1;
	dest2 = src2 + 1;

	n = 8;
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/04 13:05:12 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char		*s;
	unsigned char	*d;
	size_t			i;

	s = (const char *) src;
	d = (unsigned char *) dest;


	if (dest == NULL && src == NULL)
		return (NULL);
	if (&dest >= &src)
	{
		printf("patras\n");
		i = n;
		while (i-- > 0)
			d[i] = s[i];
	}
	else
	{
		printf("palante\n");
		i = -1;
		while (i++ < n)
			d[i] = s[i];
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char		src1[]  = "abcde";
	char		*dest1;
	size_t		n;
	//char		src2[]  = "abcde";
	//char		*dest2;
	
	dest1 = src1 + 2;
	//dest2 = src2 + 2;

	n = 3;
	printf("%s    %s    %ld\n", dest1, src1, n);
	printf("%p , %p -- ", &dest1, &src1);
	memmove(dest1, src1, n);
	//ft_memmove(dest2, src2, n);
	printf("%s    %s-\n", dest1, src1);
	//printf("%s    %s-\n", dest2, src2);
	
	return (0);
}

/*
#include <string.h>
void *memmove(void *dest, const void *src, size_t n);
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
*/

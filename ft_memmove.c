/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/02 09:46:28 by jalcibar         ###   ########.fr       */
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
	printf("%p , %p ", &dest, &src);
	if (dest >= src)
		printf("palante\n");
	else
		printf("patras\n");
	
	i = n - 1;
	while (i >= 0)
	{
		d[i] = s[i];
		i--;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char		src1[]  = "abcdefg";
	char		*dest1;
	size_t		n;
	char		src2[]  = "abcdefg";
	char		*dest2;
	
	dest1 = src1 + 3;
	dest2 = src2 + 3;

	n = 5;
	printf("%s    %s    %ld\n\n", dest1, src1, n);
	memmove(dest1, src1, n);
	printf("%s    %s-\n", dest1, src1);

	ft_memmove(dest2, src2, n);
	printf("%s    %s-\n", dest2, src2);
	
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

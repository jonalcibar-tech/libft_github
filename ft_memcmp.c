/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/19 15:32:17 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/19 18:44:19 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include	<stddef.h>
#include	<stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tmp_s1;
	unsigned char	*tmp_s2;

	i = 0;
	tmp_s1 = (unsigned char *)s1;
	tmp_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (tmp_s1[i] != tmp_s2 [i])
			return (tmp_s1[i] - tmp_s2[i]);
		else 	
			i++;
	}
	return (0);
}

#include	<stddef.h>
#include	<string.h>
#include	<stdio.h>

int	main(void)
{
	const char	s1[] = "Hello Wor";
	const char	s2[] = "Hello World";
	size_t	n;

	n = 5;
	printf("%s %s %ld-\n", s1, s2, n);
	printf("%d-\n", memcmp(s1, s2, n));
	printf("%d-\n", ft_memcmp(s1, s2, n));
	return (0);
}
/*
memcmp - compare memory areas
#include <string.h>
int memcmp(const void *s1, const void *s2, size_t n);

The  memcmp()  function compares the first n bytes (each interpreted as
unsigned char) of the memory areas s1 and s2.

The memcmp() function returns  an  integer  less  than,  equal  to,  or
greater than zero if the first n bytes of s1 is found, respectively, to
be less than, to match, or be greater than the first n bytes of s2.
For a nonzero return value, the sign is determined by the sign  of  the
difference  between  the  first  pair of bytes (interpreted as unsigned
char) that differ in s1 and s2.
If n is zero, the return value is zero.
*/
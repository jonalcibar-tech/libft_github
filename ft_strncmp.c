/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 13:07:19 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/02 12:49:03 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	if (!s1 && !s2)
		return (0);
	while (n != 0 && count < n)
	{
		if ((unsigned char)s1[count] != (unsigned char)s2[count])
			return ((unsigned char)s1[count] - (unsigned char)s2[count]);
		count ++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char str1[] = "test\200";
	const char str2[] = "test\0";
	size_t n;

	n = 6;
	printf("%s\n%s\n", str1,str2);
	printf("%zu %d\n", n, strncmp(str1, str2, n));
	printf("%zu %d\n", n, ft_strncmp(str1, str2, n));
	return (0);
}
*/
/*
int strncmp(const char *s1, const char *s2, size_t n);
#include <string.h>
The  strcmp()  function compares the two strings s1 and s2. It compares  only
the  first (at most) n bytes of s1 and s2..  The locale is not taken into
account (locale son los caracteres regionales no ASCII o UTF8)
The comparison is done using unsigned characters.

strncmp() returns an integer indicating the result of the comparison, as
follows, ** MIND!** ASCII value compared, not strings s1 and s2 length.
• 0, if the s1 and s2 are equal;
• a negative value if s1 is less than s2; MIND! Last compared character not str
• a positive value if s1 is greater than s2.

The strncmp() function returns an integer less than, equal to, or greater than
zero if s1 (or the first n bytes thereof) is found, respectively, to be less
than, to match, or be greater than s2.
*/
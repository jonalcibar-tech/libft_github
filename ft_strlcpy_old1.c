/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_old.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:51:42 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/12 11:40:14 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size != 0)
	{
		while (count < size - 1)
		{
			((char *) dst) [count] = ((const char*) src) [count];
			count ++;
		}
		((char *) dst) [count] = '\0';
	}
	return ft_strlen(src);
}
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char	src1[] = "HOLA MUNDO";
	char		dst1[5];
	const char	src2[] = "HOLA MUNDO";
	char		dst2[5];
	size_t		n;

	n = 5;
	printf("%s - %s %zu\n", dst1, src1, n);
	printf("%zu %s\n", strlcpy(dst1, src1, n), dst1);
	printf("%zu %s\n", ft_strlcpy(dst2, src2, n), dst2);
	return (0);
}

/*
strlcpy(char *dst, const char *src, size_t size);

The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.

The strlcpy() function returns the total length of the string it tried to 
create. For strlcpy() that means the length of src.
*/
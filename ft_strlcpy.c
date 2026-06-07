/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:51:42 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/07 14:00:55 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size != 0)
	{
		while ((count <= size - 1) && (((const char *) src)[count] != '\0'))
		{
			((char *) dst) [count] = ((const char*) src) [count];
			count ++;
		}
		((char *) dst) [count] = '\0';
	}
	return (*src);
}
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char	src1[] = "HOLA MUNDO";
	char		dst1[] = "";
	const char	src2[] = "HOLA MUNDO";
	char		dst2[] = "";
	size_t		n;

	n = 5;
	printf("%s - %s %zu\n", dst1, src1, n);
	printf("%zu ", ft_strlcpy(dst1, src1, n));
	printf("%zu ", ft_strlcpy(dst2, src2, n));
	return (0);
}

/*
strlcpy(char *dst, const char *src, size_t size);

The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.

The strlcpy() function returns the total length of the string it tried to 
create. For strlcpy() that means the length of src.
*/
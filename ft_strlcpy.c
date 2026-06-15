/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:08:18 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/15 16:25:12 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	if (src_len + 1 < size)
		ft_memcpy(dst, src, src_len + 1);
	else
	{
		ft_memcpy(dst, src, size - 1);
		dst[size - 1] = '\0';
	}
	return (src_len);
}
/*
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
	printf("%zu %s-\n", strlcpy(dst1, src1, n), dst1);
	printf("%zu %s-\n", ft_strlcpy(dst2, src2, n), dst2);
	return (0);
}
*/
/*
size_t strlcpy(char *dst, const char *src, size_t size);

The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.

The strlcpy() function returns the total length of the string it tried to 
create. For strlcpy() that means the length of src.
*/
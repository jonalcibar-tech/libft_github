/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:51:42 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/12 13:47:19 by jalcibar         ###   ########.fr       */
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
			((char *)dst)[count] = ((const char *)src)[count];
			count ++;
		}
		((char *)dst)[count] = '\0';
	}
	return (ft_strlen(src));
}

#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
char str1[] = "lorem";
char str2[] = "lorem";
char str3[] = "lorem";

printf("Comparación con strlcpy estándar:\n");
printf("%zu - ", strlcpy(str1 + 5, str1, 15));
str1[15] = '\0';
printf("str1 (strlcpy): %s\n", str1);

printf("Antes ft_strlcpy (sin overlap):\n");
printf("str2: %s\n", str2);

printf("%zu - ", strlcpy(str2 + 5, str2, 15));
str2[15] = '\0';

printf("Después ft_strlcpy (con overlap):\n");
printf("str2: %s\n\n", str2);


printf("%zu - ", strlcpy(str3 + 5, str3, 15));
ft_strlcpy(str3, "ABCDE", 15);
str3[5] = '\0';
printf("str3: %s\n", str3);

return (0);
}
/*
{
	const char	src1[] = "lorem";
	char		dst1[15];
	const char	src2[] = "lorem";
	char		dst2[15];
	size_t		n;

	n = 15;
	printf("%s - %s %zu\n", dst1, src1, n);
	printf("%zu -%s-\n", strlcpy(dst1, src1, n), dst1);
	printf("%zu -%s-\n", ft_strlcpy(dst2, src2, n), dst2);
	return (0);
}
*/
/*
strlcpy(char *dst, const char *src, size_t size);

The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.

The strlcpy() function returns the total length of the string it tried to 
create. For strlcpy() that means the length of src.
*/
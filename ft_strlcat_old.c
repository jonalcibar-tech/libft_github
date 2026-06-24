/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 16:08:18 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/24 13:49:56 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	
	printf("dst_len:%zu\n",dst_len);
	printf("src_len:%zu\n",src_len);	
	if (src == NULL || size == dst_len || size == 0)
		return (dst_len + src_len);
	if (dst_len <=(size - 1))
	{
		ft_memcpy(dest + dst_len, src, size - dst_len);
		dest[size - 1] = '\0';
	}
	else
	{
		return (size + src_len);
	}
	return (dst_len + src_len);
}

#include <stdio.h>

int	main(void)
{

	//char		dst[15] = "rrrrrrrrrrrrrr";
	//onst char	src[] = "lorem ipsum dolor sit amet";
	char		dst[11] = "HOLA";
	const char	src[] = " MUNDO";
	size_t		n;

	n = 15;

	//printf("%s- %s- %zu\n", dst, src, n);
	//printf("strl_cat:%zu %s-\n", strlcat(dst, src, n), dst);
	printf("ft_strlcat:%zu %s-\n", ft_strlcat(dst, src, n), dst);
	return (0);
} 

/*
strlcat(char *dst, const char *src, size_t size);

The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
nating the result.  The initial character of the string(src) overwrites the
Null-character present at the end of the string(dest).

returns strlcat() the initial length of dst plus the length of src
*/
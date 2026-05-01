/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/01 14:03:06 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// para pruebas
int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

#include <stddef.h>
int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	count;

	if (size ==  0)
		return (ft_strlen(src));
	count = 0;
	while ((count <= size ) && ((char *)src) != '\0')
	{
		dst[ft_strlen(dst) + count] = src[count];
		printf("%c", dst[ft_strlen(dst) + count]);
		count++;
	}
	dst[ft_strlen(dst) + count] = '\0';
	return(ft_strlen(dst) + count);
}


#include	<stdio.h>
#include	<bsd/string.h>
#include	<string.h>

int	main(void)
{
	const char	src_string[] = "source";
	char		in_dst_string[] = "destiny";
	char		dst_string[(sizeof(src_string)) + (sizeof(in_dst_string))];
	
	strcpy(dst_string, in_dst_string);
	printf("%s\n", src_string);
	printf("%s\n", dst_string);
	printf("%zu\n", ft_strlcat(dst_string, src_string, sizeof(dst_string)));
	printf("%s\n", dst_string);
	return (0);
}
/*
strlcat(char *dst, const char *src, size_t size);

The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
nating the result.  The initial character of the string(src) overwrites the
Null-character present at the end of the string(dest).

strlcat() returns  the initial length of dst plus the length of src. 
*/
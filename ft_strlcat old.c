/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat old.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/06 11:30:22 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

size_t	ft_strlen (const char *str)
{	
	int		count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

#include	<stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	count;
	int init_dst_len;

	init_dst_len = ft_strlen(src);
	count = 0;
	
	if((int)size <= ft_strlen(dst))
		return((size_t)init_dst_len);
	while ((src[count] != '\0') && ((init_dst_len + count) < (size-1)))
	{
		dst[init_dst_len + count] = src [count];
		count++;
	}
	dst[init_dst_len + count] = '\0';
	return (init_dst_len + ft_strlen(src)); //porque hay que quitar  \0 de la dst inicial
}

#include	<bsd/string.h>
#include	<string.h>

int	main(void)
{
	const char	src_string[] = "source";
	char		dst_string[20] = "destiny";
	int			contar;
	
	printf("%s\n", src_string);
	printf("%s\n", dst_string);
	contar = 0;
	while (contar <= 20)
	{
		strcpy(dst_string, "destiny");
		printf("%d %zu %s %c\n", contar, strlcat(dst_string, src_string, contar), dst_string, '-');
		printf("%d %zu %s %c\n\n", contar, ft_strlcat(dst_string, src_string, contar), dst_string, '-');
		contar++;
	}
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
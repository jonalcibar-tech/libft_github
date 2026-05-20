/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/20 15:44:48 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(const char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
{
	size_t	i;
	
	i = 0;
	while (i < size)
	{

	}
}

#include	<stdio.h>
#include	<bsd/string.h>
int	main(void)
{
	const char	src_string[] = "source";
	char		temp_dest_string[] = "dest";
	char		dst_string[20] = "";		
	size_t		contar;

	
	printf("%s\n", src_string);
	printf("%s\n", temp_dest_string);

	contar = 0;
	while (contar <= 20)
	{
		strcpy(dst_string, temp_dest_string);
		printf("%zu %zu %s-\n", contar, strlcat(dst_string, src_string, contar), dst_string);
		strcpy(dst_string, temp_dest_string);
		//printf("%zu %zu %s-\n\n", contar, ft_strlcat(dst_string, src_string, contar), dst_string);
		contar++;
	}
	return (0);
}
/*
size_t strlcat(char *dst, const char *src, size_t size);

The strlcat() function appends the NUL-terminated string src to the end
of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-termi‐
nating the result.  The initial character of the string(src) overwrites the
Null-character present at the end of the string(dest).

returns strlcat() the initial length of dst plus the length of src
*/
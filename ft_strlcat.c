/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/08 13:41:15 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//test
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
	int		count;
	size_t	init_dst_len;
	size_t	count_src;

	init_dst_len = ft_strlen(dst);
	if (size < init_dst_len) 
	{
			printf("size < init_dest_len\n");
			return (size + ft_strlen(src));
	}
	else if (size == init_dst_len)
	{
		printf("size == init_dst_len\n");
		dst[size] = src[1];
		dst[size+1] = '\0'; //dst debe terminar en \0
		//printf("%zu size == init_dst_len\ndst[size]: %c %s\n", size, dst[size], dst);
		return (init_dst_len + ft_strlen(src));
	}
	else
	{
		count = init_dst_len;
		count_src = 1;
		while ((src[count_src] != '\0') && ((count) < size))
		{
			printf("en bucle. count=%d src_count=%zu\n", count, count_src);
			dst[count] = src[count_src];
			count++;
			count_src++;
			
		}
		dst[init_dst_len + count] = '\0';
		return (init_dst_len + ft_strlen(src));
	}
}

#include	<bsd/string.h>
#include	<string.h>

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
		printf("%zu %zu %s %c\n", contar, strlcat(dst_string, src_string, contar), dst_string, '-');
		strcpy(dst_string, temp_dest_string);
		printf("%zu %zu %s %c\n\n", contar, ft_strlcat(dst_string, src_string, contar), dst_string, '-');
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
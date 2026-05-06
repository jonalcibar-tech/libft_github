/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat copy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/06 15:31:43 by jalcibar         ###   ########.fr       */
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

	init_dst_len = ft_strlen(dst);
	count = 0;
	if(size = 0)
		return(size + (size_t)ft_strlen(src)); // lo exige la función
	if((int)size <= ft_strlen(dst)) 
	{	
		printf("%zu %zu", size, ft_strlen(dst));
		return(size + (size_t)ft_strlen(src)); // lo exige la función
	}
	while ((src[count] != '\0') && ((init_dst_len + count) < (size)))
	{
		printf("%s", "bucle ");
		//dst[init_dst_len + count] = src [count];
		count++;
	}
	dst[init_dst_len + count] = '\0';
	return (init_dst_len + ft_strlen(src)-2); //porque hay que quitar \0 del fin src y dst
}

#include	<bsd/string.h>
#include	<string.h>

int	main(void)
{
	const char	src_string[] = "source";
	char		temp_dest_string[] = "destiny";
	char		dst_string[20] = "";		
	size_t		contar;

	
	printf("%s\n", src_string);
	printf("%s\n", temp_dest_string);

	contar = 0;
	while (contar <= 20)
	{
		strcpy(dst_string, temp_dest_string);
		printf("%zu %zu %s %c\n", contar, strlcat(dst_string, src_string, contar), dst_string, '-');
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
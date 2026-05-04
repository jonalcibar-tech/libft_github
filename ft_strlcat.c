/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/04 13:30:29 by jalcibar         ###   ########.fr       */
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
int	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	count;
	int	dst_init_length;
	
	count = 0;
	dst_init_length = ft_strlen(dst);
	//if (size = 0)
	//	return(ft_strlen(dst));
	while ((count <= size)  && (src[count] !='\0'))
	{
			dst[(dst_init_length + count)] = src[count];
			count++;
	}
	dst[(count + ft_strlen(dst))] = '\0';
	return(ft_strlen(dst));
}
#include	<stdio.h>
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
	while (contar <= 18)
	{
		strcpy(dst_string, "destiny");
		printf("%d %zu %s\n", contar, strlcat(dst_string, src_string, contar), dst_string);
		printf("%d %zu %s\n\n", contar, ft_strlcat(dst_string, src_string, contar), dst_string);
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

returns strlcat() the initial length of dst plus the length of src. 
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/28 17:51:07 by jalcibar         ###   ########.fr       */
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
	
	count = 0;
	//if (size = 0)
	//	return(ft_strlen(dst));
	while ((count <= size)  && (src[count] !='\0'))
	{
			dst[(count + ft_strlen(dst))] = src[count];
			printf("%d %c %c %s\n", count, dst[(count + ft_strlen(dst))], src[count], dst);
			count++;
	}
	dst[(count + ft_strlen(dst))] = '\0';
	return(ft_strlen(dst) + ft_strlen(src));
}
#include	<stdio.h>

int	main(void)
{
	const char	src_string[] = "source";
	char		dst_string[20] = "destiny";
		
	printf("%s\n", src_string);
	printf("%s\n", dst_string);
	printf("\n%d\n", ft_strlcat(dst_string, src_string, 20));
	printf("%s\n", dst_string);
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
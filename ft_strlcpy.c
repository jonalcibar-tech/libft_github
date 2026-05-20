/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 10:51:42 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/20 12:53:11 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size != 0)
	{
		while ((count <= size - 1) && (((const char *) src)[count] != '\0'))
		{
			((char *) dst) [count] = ((const char*) src) [count];
			count ++;
		}
		((char *) dst) [count] = '\0';
	}
	return (*src);
}

/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	const char	src_string[] = "hello";
	char		dst_string[] = "goodbye";

	printf("%p   %s\n", &src_string, src_string);
	printf("%p   %s\n\n", &dst_string, dst_string);
	ft_strlcpy(dst_string, src_string, 15);
	printf("%p   %s\n", &src_string, src_string);
	printf("%p   %s\n", &dst_string, dst_string);
	return 0;
}
*/	
/*
strlcpy(char *dst, const char *src, size_t size);

The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.

The strlcpy() function returns the total length of the string it tried to 
create. For strlcpy() that means the length of src.
*/
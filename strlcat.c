/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 16:17:08 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/04 11:47:43 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<bsd/string.h>
#include	<string.h>

int	main(void)
{

	const char	src[] = "source";
	char		dst_string[] = "destiny";
	char		dst[strlen(dst_string + strlen(src))];
	
	strcpy(dst, dst_string);
	printf("%s\n", src);
	printf("%s\n", dst);
	//printf("%zu\n", strlcat(dst, src, (strlen(src) + strlen(dst)+1)));
	printf("%zu\n", strlcat(dst, src, 9));
	printf("%s\n", dst);
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
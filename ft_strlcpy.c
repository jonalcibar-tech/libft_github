/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/15 09:41:44 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/15 13:28:42 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size == 0)
		return (0);
	if ((ft_strlen(src) + 1) <= size)
	{
		ft_memcpy(dst, src, ft_strlen(src)-1);
		dst[ft_strlen(src)] = '\0';
	}
	else
	{
		ft_memcpy(dst, src, size - 1);
		dst[size] = '\0';
	}
	return (ft_strlen(src));
}

void	ft_print_result(int n)
{
	char c;

	if (n >= 10)
		ft_print_result(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}
int		main(void)
{
	char	*dest;
	
	dest = (char *)malloc(sizeof(*dest) * 15);

	memset(dest, 0, 15);
	memset(dest, 'r', 6);
	
		ft_print_result(ft_strlcpy(dest, "lorem", 15));
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n", 1);
		ft_print_result(strlcpy(dest, "lorem", 15)); 
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n\n", 2);

		//ft_print_result(ft_strlcpy(dest, "", 15));
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n", 1);
		ft_print_result(strlcpy(dest, "", 15));
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n\n", 2);
		write(1, "\n", 1);
		
		ft_print_result(ft_strlcpy(dest, "lorem ipsum", 3));
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n", 1);
		ft_print_result(strlcpy(dest, "lorem ipsum", 3)); 
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n\n", 2);

		ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n", 1);
		ft_print_result(strlcpy(dest, "lorem ipsum dolor sit amet", 15)); 
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n\n", 2);

		ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n", 1);
		ft_print_result(strlcpy(dest, "lorem ipsum dolor sit amet", 0)); 
		write(1, " - ", 3);
		write(1, dest, 15);
		write(1, "\n\n", 2);
	return (0);
}

/*
strlcpy(char *dst, const char *src, size_t size);
The strlcpy() function copies up to size - 1 characters from the NUL-terminated
string src to dst, NUL-terminating the result.
The strlcpy() function returns the total length of the string it tried to 
create. For strlcpy() that means the length of src.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 12:03:59 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/03 16:35:46 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	count;

	count = 0;
	if (little[0] == '\0')
		return ((char *)big);
	count = 0;
	while (ft_strlen(little) + count <= len)
	{
		if (ft_strncmp(big + count, little, ft_strlen(little)) == 0)
			return ((char *)big + count);
		count ++;
	}
	return (NULL);
}
/*
int	main (void)
{
	const char	*big = "HOLA MUNDO";
	const char	*little = "LA";
	size_t		n;

	n = 3;
	printf("%s\n%s\n%zu\n", big, little, n);
	printf("%s\n", strnstr(big, little, n));
	//printf("%s\n", ft_strnstr(big, little, n));

	return (0);
}
*/
/*
strnstr — locate a substring in a string
Utility functions from BSD systems (libbsd, -lbsd)
#include <string.h>
(See libbsd(7) for include usage.)

char *
strnstr(const char *big, const char *little, size_t len);

The strnstr() function locates the first occurrence of the null-termi‐
nated string little in the string big, where not more than len characters
are searched.  Characters that appear after a ‘\0’ character are not
searched.  Since the strnstr() function is a FreeBSD specific API, it
should only be used when portability is not a concern.

If little is an empty string, big is returned; if little occurs nowhere
in big, NULL is returned; otherwise a pointer to the first character of
the first occurrence of little is returned.
*/
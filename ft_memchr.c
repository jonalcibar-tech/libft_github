/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 10:43:59 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/17 12:06:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>
#include	<stdio.h>
void *ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*tmp_s;
	
	i = 0;
	tmp_s = (char*)s;
	while ((i < n) && tmp_s[i] != c)
		i++;
	if (tmp_s[i] == c)
		return (&tmp_s[i]);
	else
		return (NULL);
}
#include	<stddef.h>
#include	<string.h>
#include	<stdio.h>

int	main(void)
{
	char	s[] = "Hello World";
	int		c;
	size_t	n;

	c = 'W';
	n = 8;
	printf("%s %c %zu %s\n", s, c, n, (char*)memchr(s, c, n));
	printf("%s %c %zu %s\n", s, c, n, (char*)ft_memchr(s, c, n));
	return (0);
}

/*
void *memchr(const void *s, int c, size_t n);
The  memchr()  function  scans  the  initial n bytes of the memory area
pointed to by s for the first instance of c.  Both c and the  bytes  of
the memory area pointed to by s are interpreted as unsigned char.

The  memchr()  and memrchr() functions return a pointer to the matching
byte or NULL if the character does not occur in the given memory area.
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/10 10:16:25 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/01 09:24:51 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		len_s;
	int		count;
	char	charc;

	charc = (char)c;
	len_s = ft_strlen((char *)s);
	count = 0;
	while (count <= len_s)
	{
		if (charc == s[count])
			return ((char *)&s[count]);
		count++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char string[] = "This is a test";
	int c;
	
	c = 't';
	printf("%s\n", string);
	printf("%c %p\n", c, strchr(string, c));
	printf("%c %p\n", c, ft_strchr(string, c));
	return (0);
}
*/
/*
char *strchr(const char *s, int c);

#include <string.h>
The  strchr()  function  returns a pointer to the first occurrence of the
character c in the string s.
The  strchr()  function returns a pointer to the matched
character or NULL if the character is not found.  The terminating null byte is
considered part of the string, so that if c is specified as '\0',
these functions return a pointer to the terminator.
*/
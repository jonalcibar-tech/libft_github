/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:20:27 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/29 13:42:53 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len_s;
	int		count;
	char	charc;

	charc = (char)c;
	len_s = ft_strlen((char *)s);
	count = len_s;
	while (count > 0)
	{
		if (charc == s[count])
			return ((char *)&s[count]);
		count--;
	}
	return ('\0');
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char string[] = "This is a test";
	int c;
	
	c = 's';
	printf("%s\n", string);
	printf("%c %p\n", c, strrchr(string, c));
	printf("%c %p\n", c, ft_strrchr(string, c));
	return (0);
}
*/
/*
char *strrchr(const char *s, int c)
#include
The strrchr() function returns a pointer to the LAST occurrence of the character
c in the string s. The strrchr() functions return a pointer to the matched
character or NULL if the character is not found. The terminating null byte is
considered part of the string, so that if c is specified as '\0', these functions
return a pointer to the terminator.
*/
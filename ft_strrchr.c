/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 12:20:27 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/01 14:37:10 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		count;

	count = ft_strlen(s);
	while (count >= 0)
	{
		if (s[count] == (char)c)
			return ((char *)&s[count]);
		count--;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	const char string[] = "bonjour";
	int c;
	
	c = '\0';
	printf("%s\n", string);
	printf("%c %c\n", c, *strrchr(string, c));
	printf("%c %c\n", c, *ft_strrchr(string, c));
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 10:34:48 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/27 12:23:19 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char			*newstr;
	size_t			i;

	newstr = malloc((size_t)ft_strlen(s)+1);
	if (!newstr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		newstr[i] = s[i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
int main (void)
{
	const char	str[] = "Test";

	printf("%s\n",strdup(str));
	printf("%s",ft_strdup(str));
}
*/
/*
char *strdup(const char *s);
The  strdup() function returns a pointer to a new string which is a
duplicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3).
*/
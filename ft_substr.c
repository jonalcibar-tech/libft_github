/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 12:21:45 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/28 13:02:17 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	slen;
	size_t	chnum;

	chnum = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		chnum = 0;
	else if (len < slen - start)
		chnum = len;
	else
		chnum = slen - start;
	result = malloc(chnum + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s + start, chnum);
	result[chnum] = '\0';
	return (result);
}
/*
int	main(void)
{
	char const		*s = NULL;
	unsigned int	start;
	size_t			len;

	start = 15;
	len = 5;
	printf("%s", ft_substr(s, start, len));
}
*/
/*
Reserva memoria (con malloc(3)) y devuelve una
subcadena de caracteres de la cadena ‘s’.
La subcadena comienza en el índice ‘start ’ y tiene
una longitud máxima ‘len ’.
*/
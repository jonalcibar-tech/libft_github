/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 15:06:46 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/28 16:42:59 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	result = malloc (ft_strlen(s1) + ft_strlen(s2)+1);
	if (!result)
		return (NULL);
	ft_memcpy (result, (void *)s1, ft_strlen(s1));
	ft_memcpy (result + ft_strlen(s1), (void *)s2, ft_strlen(s2));
	result[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (result);
}
/*
int main (void)
{
	char const s1[] = "HOLA";
	char const s2[] = "";
	printf("%s", ft_strjoin(s1, s2));
}
*/
/*
Reserva memoria (con malloc(3)) y devuelve una
nueva cadena de caracteres, formada por la
concatenación de ‘s1’ y ‘s2’.
*/
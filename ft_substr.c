/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:53:01 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/27 17:02:34 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	
	if ((start + len) > (ft_strlen(s)+1))
		return ("");
	result = malloc(start + len);
	if (!result)
		return (NULL);
	ft_memcpy(&start, &s, len);
	return (result);

}

int	main(void)
{
	char const		*s = "Hola que tal";
	unsigned int	start;
	size_t			len;

	start = 5;
	len = 5;
	printf("%s\n", ft_substr(s, start, len));
}
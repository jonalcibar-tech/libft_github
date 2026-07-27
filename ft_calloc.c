/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 12:20:00 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/24 12:25:31 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	unsigned char	*mempoint;
	size_t			count;

	mempoint = malloc(nmeb * size);
	if (!mempoint)
		return (NULL);
	count = 0;
	while (count < nmeb * size)
		mempoint[count++] = 0;
	return (mempoint);
}
/*
int    main (void)
{
    printf("%p\n", calloc(3, 5));
    printf("%p\n", ft_calloc(3, 5));
}
*/
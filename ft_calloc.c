/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/24 11:35:20 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/24 11:44:57 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(int nmeb, int size)
{
	unsigned char	*mempoint;
	int				count;

	if (!nmeb || !size)
		return (malloc(1));
	mempoint = malloc(nmeb * size);
	count = 0;
	while (count < nmeb * size)
		mempoint[count++] = 0;
	return (mempoint);
}
/*
int    main (void)
{
    printf("%p\n", calloc(5, 3));
    printf("%p\n", ft_calloc(5, 3));
}
*/
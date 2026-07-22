/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 09:38:01 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/22 15:49:05 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc (size_t nmeb, size_t size)
{
str	mempoint

if (nmeb == 0 || size == 0)
	return malloc(1);
*mempoint = malloc(nmeb * size);
while mempoint


}

int	main (void)
{
	printf("%p\n", ft_calloc(0, 0));
}

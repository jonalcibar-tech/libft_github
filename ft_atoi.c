/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 15:00:35 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/20 16:12:12 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		value;
	int		sign;

	i = 0;
	value = 0;
	sign = 1;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		value = value * 10 + nptr[i] - 48;
		i++;
	}
	return (value * sign);
}
/*
int	main(void)
{
	const char	nptr[] = "4242";

	printf("%d\n", atoi(nptr));
	printf("%d", ft_atoi(nptr));
	return(0);
}
*/
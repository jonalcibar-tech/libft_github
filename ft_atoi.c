/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 18:32:27 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/07 18:05:53 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_power(unsigned int x, unsigned int n)
{
	size_t	count;
	int		result;

	count = 1;
	result = x;
	if (n == 0 && x == 0)
		write(1, "0 raised to 0 undetermined", 26);
	return (-1);
	while (count < n)
	{
		result = result * x;
		count ++;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	size_t	count;
	long	value;
	int		decimal;
	char	charact;

	count = ft_strlen(nptr);
	value = 0;
	decimal = 0;
	printf("%zu", count);
	while (nptr[count] && count > 0)
	{
		charact = nptr[count-1];
		printf("\n %c ",charact);
		if (ft_isdigit(charact))
		{
			value = value + ft_power(10, decimal) * (charact >= 48 && charact <= 57);
			decimal ++;
		}
		else if (charact == '-')
			value = -value;
		else if (charact != ' ' || charact != '+')
			return(0);
		count--;
	}
	if (value >= 2147483648)
		return(2147483648-1);
	if (value < -2147483648)
		return(-2147483648);
	return value;
}

int	main(void)
{
	const char	nptr[] = "42MUNDO";

	printf("%d\n", atoi(nptr));
	printf("%d", ft_atoi(nptr));
	return(0);
}

/*
The  atoi() function converts the initial portion of the string pointed
to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);
except that atoi() does not detect errors.
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 18:32:27 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/08 12:54:00 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_pow(unsigned int x, unsigned int n)
{
	size_t	count;
	int		result;

	count = n;
	result = 1;
	if (n == 0 && x == 0)
		write(1, "0 raised to 0 undetermined", 26);
	while (count > 0)
	{
		result *= x;
		count --;
	}
	return (result);
}
int	ft_atoi(const char *nptr)
{
	size_t	count;
	long	value;
	int		decimal;
	char	charact;
	int		signrep;

    if (nptr == NULL)
      return (0);
	count = ft_strlen(nptr) - 1;
	value = 0;
    decimal = 0;
	signrep = false
	//printf("%zu ", count);
	while (nptr[count] != '\0')
	{
		charact = nptr[count];
		//printf("character: %d\n",charact);
		if (ft_isdigit(charact))
		{
			value = value + ft_pow(10, decimal) * (charact - 48);
			decimal ++;
		}
		else if (charact == '-' && signrep = 0)
		{	
			value = -value;
			signrep = 1;
		}
		else if (charact == '+')
			signrep = 1;
		else if
		{
			value = 0;
		}
		value = 0 * (signrep = 1)
		
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
	const char	nptr[] = "g55";

	printf("%d\n", atoi(nptr));
	printf("%d", ft_atoi(nptr));
	return(0);
}

/*
The  atoi() function converts the initial portion of the string pointed
to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);
except that atoi() does not detect errors.
*/
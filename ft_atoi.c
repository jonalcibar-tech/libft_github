/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 18:32:27 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/15 16:59:14 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int    ft_atoi(const char *nptr)
{
    size_t	i;
    long    value;
    char    charact;
	int		sign;

    i = 0;
    value = 0;
	sign = 1;
    while (i <= ft_strlen(nptr) - 1)
    {
        charact = nptr[i];
        if ((charact >= 0 && charact <= 32) && charact != '\n')
            value = 0;
        else if (ft_isdigit(charact))
        	value = value * 10 + (charact - 48);
        else if (charact == '+')
        {}
        else if (charact == '-')
			sign = -sign;
		i++;
	}
	value = value * sign;
    if (value >= 2147483648)
        return (2147483648 - 1);
    if (value < -2147483648)
        return (-2147483648);
    return (value);
}
/*
int    main(void)
{
    const char    nptr[] = "-4";

    printf("%d\n", atoi(nptr));
    printf("%d", ft_atoi(nptr));
    return(0);
}
*/
/*
The  atoi() function converts the initial portion of the string pointed
to by nptr to int.  The behavior is the same as strtol(nptr, NULL, 10);
except that atoi() does not detect errors.
*/
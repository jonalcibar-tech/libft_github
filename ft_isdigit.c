/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:11:48 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/22 16:52:21 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h> 
#include <ctype.h>

int	main(void)
{
	int	variable;

	variable = 'A';
	printf("%d \n", ft_isdigit(variable));
	printf("%d\n", isdigit(variable));
	return (0);
}
*/
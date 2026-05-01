/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:11:48 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/22 17:08:34 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122))
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

	variable = '8';
	printf("%d \n", ft_isalnum(variable));
	printf("%d\n", isalnum(variable));
	return (0);
}
*/
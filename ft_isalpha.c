/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:35:14 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/22 16:52:32 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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
	printf("%d \n", ft_isalpha(variable));
	printf("%d\n", isalpha(variable));
	return (0);
}*/

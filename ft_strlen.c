/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:11:48 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/08 18:25:16 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	test_string[100] = "hello";

	printf("%zu \n", strlen (test_string));
	printf("%d \n", ft_strlen (test_string));
	return (0);
}
*/
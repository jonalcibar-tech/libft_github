/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:11:48 by jalcibar          #+#    #+#             */
/*   Updated: 2026/05/01 13:12:36 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

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
	char	test_string[100] = "hello";

	printf("%zu \n", strlen (test_string));
	printf("%d \n", ft_strlen (test_string));
	return (0);
}
*/
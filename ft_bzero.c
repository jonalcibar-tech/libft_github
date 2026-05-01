/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/04/28 11:04:12 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	int		count;
	char	*temp;

	temp = (char *) s;
	count = 0;
	while (count < n)
	{
		temp [count] = '\0';
		count++;
	}
}


#include	<stdio.h>

/*
int	main(void)
{
	char	string[] = "hola";
	
	printf("%s\n", string);
	ft_bzero(string, strlen(string));
	printf("%s\n", string);
	return (0);
}
*/

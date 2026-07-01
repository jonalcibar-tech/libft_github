/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 09:00:42 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/01 09:12:09 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
/*
#include <ctype.h>
#include <stdio.h>

int main()
{
	int j;
	char str[] = "Hola Que tal &123\n";
	char ch;

	j = 0;
	while (str[j])
	{
		ch = str[j];
		printf("tolower:%c  ft_lower:%c\n", tolower(ch), ft_tolower(ch));
		j++;
	}
	return 0;
}
	*/
/*
int tolower_l(int c, locale_t locale);
If  c is an uppercase letter, tolower() returns its lowercase equivalent,
if a lowercase representation exists in the current locale.  Otherwise,
Sit returns c.  The tolower_l() function performs the same  task,  but  uses
the locale referred to by the locale handle locale.
*/
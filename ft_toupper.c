/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 08:59:00 by jalcibar          #+#    #+#             */
/*   Updated: 2026/07/01 09:04:59 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (c - 32);
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
		printf("toupper:%c  ft_toupper:%c\n", toupper(ch), ft_toupper(ch));
		j++;
	}

	return 0;
}
*/
/*
int toupper_l(int c, locale_t locale);
If  c is a lowercase letter, toupper() returns its uppercase equivalent,
if an uppercase representation exists in the current locale. Otherwise,
it returns c.  The toupper_l() function performs the same  task,  but  uses
the locale referred to by the locale handle locale.
*/
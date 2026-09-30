/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 18:33:50 by jalcibar          #+#    #+#             */
/*   Updated: 2026/09/30 16:28:13 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static size_t ft_len(long n)
{
	size_t	len;
	size_t  i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		{
			n = -n;
			i++;
		}
	if (n < 1)
		i++;
	while (n)
		{
			n /= 10;
			i++;
		}
	return (i);
}
static void fillstr(char *n_string, int n)
{
	size_t	n_len;
	size_t	i;
	long	n_long;
	int		n_sign;

	n_long = (long)n;
	n_len = ft_len(n);
	n_sign = (n >= 0) - (n < 0);
	n_string[n_len] = '\0';
	i = n_len - 1;
    while (i)
	{
		n_string[i] = 48 + (n % 10) * n_sign;
        //printf("%zu %c\n", i, n_string[i]);
        n = (int)(n / 10);
        i--;
    }
	n_string [0] = 48 + n;
    if (n_sign < 0)
          n_string [0] = '-';
    //printf("%zu %c\n", i, n_string[0]);
}

char	*ft_itoa(int n)
{
	long	n_long;
	size_t	n_len;
	char	*n_string;
	size_t	i;

	
    //cuenta nº caracteres de string considera 0s y '-', no hay funcion que lo haga
    n_long = (long)n;
    n_len = ft_len(n_long),
    //reserva memoria para ello + NULL y devuelve NULL si no lo logra
    n_string = malloc(((n_len)+ 1) * sizeof(char));
    if(!n_string)
        return (NULL);
    //copia caracter por caracter ¿dcha a izq?
	fillstr(n_string, n);
    //libera la memoria.
	//free(n_string);
    return (n_string);
}

int	main(void)
{
	long	n;
	n =	-191435;

	//ft_itoa(n);
	//printf("%s", ft_itoa(n));
	printf("\n%zu %s", ft_len(n), ft_itoa(n));
	return (0);
}

/*
char *ft_itoa(int n);
Reserva memoria (utilizando malloc(3)) y devuelve
una cadena que represente el valor del número
entero recibido como argumento. Debe ser capaz de
manejar números negativos.
*/
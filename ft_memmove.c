/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 11:36:29 by jalcibar          #+#    #+#             */
/*   Updated: 2026/06/09 13:08:08 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	c;
	char 	*dest_tmp;
	char	*src_tmp;

	dest_tmp = (char *)dest;
	src_tmp = (char *)src;

	if (dest_tmp == NULL && src_tmp == NULL)
		return (dest);
	c = 0;
	dest_tmp =  (char *) dest;// so if orig. values overlap values are not altered
	src_tmp =  (char *) src;
	if (dest > src) 
		while (n -- > 0) //iterate backward
			dest_tmp[n] = src_tmp[n];
	else 
		while (c++ < n) //iterate foward
			dest_tmp[c] = src_tmp[c];	
	return (dest);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
char str1[] = "HOLA MUNDO";
char str2[] = "HOLA MUNDO";
char str3[] = "HOLA MUNDO";

printf("Antes ft_memmove (sin overlap):\n");
printf("str1: %s\n", str1);

ft_memmove(str1 + 5, str1, 2);
str1[10] = '\0';

printf("Después ft_memmove (con overlap):\n");
printf("str1: %s\n\n", str1);

printf("Comparación con memmove estándar:\n");
memmove(str2 + 5, str2, 2);
str2[10] = '\0';
printf("str2 (memmove): %s\n", str2);

printf("\nCaso simple sin overlap:\n");
ft_memmove(str3, "ABCDE", 2);
str3[5] = '\0';
printf("str3: %s\n", str3);

return (0);
}

/*
#include <string.h>
void *memmove(void *dest, const void *src, size_t n);
The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
The memmove() function returns a pointer to dest.
*/

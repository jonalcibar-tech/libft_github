/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcibar <jalcibar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 10:57:03 by jalcibar          #+#    #+#             */
/*   Updated: 2026/10/01 11:00:15 by jalcibar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
s: La cadena sobre la que iterar.
f: La función a aplicar sobre cada carácter.
Valor devuelto La cadena creada tras el correcto uso de ‘f’ sobre cada carácter.
NULL si falla la reserva de memoria.
Funciones autorizadas malloc
Descripción Aplica la función ‘f’ a cada carácter de la cadena
‘s’, pasando su índice como primer argumento y el propio carácter como segundo
argumento. Se crea una nueva cadena (utilizando malloc(3)) para almacenar
los resultados de las sucesivas aplicaciones de ‘f’.
*/
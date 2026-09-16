/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_oliver.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:31:06 by omarquez          #+#    #+#             */
/*   Updated: 2026/09/14 17:39:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	counter;
	int	words;
	int	found_word;

	counter = 0;
	words = 0;
	found_word = 1;
	while (str[counter] != '\0')
	{
		if (str[counter] == c)
			found_word = 1;
		else if (found_word == 1)
		{
			found_word = 0;
			words ++;
		}
		counter ++;
	}
	return (words);
}

static int	ft_word_len(char const *str, char c)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == c)
			return (counter);
		counter ++;
	}
	return (counter);
}

static char	**ft_assign_arr(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = malloc((ft_count_words(s, c) + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	return (arr);
}

static void	*ft_free_arr(char **arr)
{
	int	counter;

	counter = 0;
	while (arr[counter])
	{
		free(arr[counter]);
		counter ++;
	}
	free(arr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		count;
	int		count_arr;

	count = 0;
	count_arr = 0;
	arr = ft_assign_arr(s, c);
	if (arr == NULL)
		return (NULL);
	while (s[count] != '\0')
	{
		if (s[count] != c)
		{
			arr[count_arr] = ft_substr(s, count, ft_word_len(&s[count], c));
			if (arr[count_arr] == NULL)
				return (ft_free_arr(arr));
			count = count + ft_word_len(&s[count], c);
			count_arr ++;
		}
		else
			count ++;
	}
	arr[count_arr] = NULL;
	return (arr);
}
/*
int	main(void)
{
	int	counter = 0;
	char *arr = "lorem ipsum dolor sit amet. Salen"
	char **result = ft_split(arr, ' ');	
	while(counter < ft_strlen((char *) result))
	{
		printf("%s \n", result[counter]);
		counter ++;
	}
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbartoul <sbartoul@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 07:03:12 by sbartoul          #+#    #+#             */
/*   Updated: 2024/05/21 06:25:35 by sbartoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_strings(size_t i, char **strings)
{
	while (i > 0)
	{
		i--;
		free(*(strings + i));
	}
	free(strings);
}

static size_t	word_size(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*(s + i) && (*(s + i) != c))
		i++;
	return (i);
}

static char	**ft_words(char const *s, char c, char **strings, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (*(s + j) && (*(s + j) == c))
			j++;
		*(strings + i) = ft_substr(s, j, word_size(&*(s + j), c));
		if (!*(strings + i))
		{
			free_strings(i, strings);
			return (NULL);
		}
		while (*(s + j) && *(s + j) != c)
			j++;
		i++;
	}
	*(strings + i) = NULL;
	return (strings);
}

static size_t	total_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != c)
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
		else if (*(s + i) == c)
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	tword;

	if (!s)
		return (0);
	tword = total_words(s, c);
	strings = (char **)malloc(sizeof(char *) * (tword + 1));
	if (!strings)
		return (0);
	strings = ft_words(s, c, strings, tword);
	return (strings);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mherrera <mherrera@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 21:32:56 by mherrera          #+#    #+#             */
/*   Updated: 2026/03/04 17:18:49 by mherrera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_words_count(char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
		{
			words++;
		}
		i++;
	}
	return (words);
}

static char	**ft_split_allocate(char *s, char c)
{
	int		words;
	char	**split;

	words = ft_words_count(s, c);
	split = malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	while (words)
	{
		split[words] = NULL;
		words--;
	}
	return (split);
}

char	**ft_free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
	return (NULL);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		j;
	int		word_len;
	char	**split;

	i = -1;
	j = 0;
	if (!s)
		return (NULL);
	split = ft_split_allocate(s, c);
	if (!split)
		return (NULL);
	while (++i < ft_words_count(s, c))
	{
		while (s[j] == c)
			j++;
		word_len = 0;
		while (s[j + word_len] != c && s[j + word_len] != '\0')
			word_len++;
		split[i] = ft_substr(s, j, word_len);
		if (!split[i])
			return (ft_free_split(split));
		j = j + word_len;
	}
	return (split);
}

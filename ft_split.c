/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjuan-pa <gjuan-pa@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 10:27:26 by gjuan-pa          #+#    #+#             */
/*   Updated: 2026/05/13 17:15:59 by gjuan-pa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_mem(char **idx, int i)
{
	while (i > 0)
	{
		i--;
		free(idx[i]);
	}
	free(idx);
	return (NULL);
}

static int	ft_cont_words(const char *str, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] == c && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			words++;
			while (str[i] != '\0' && str[i] != c)
				i++;
		}
	}
	return (words);
}

static char	**ft_copy_words(char **copy, char const *s, char c)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	while (s[start] != '\0')
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		if (s[start])
		{
			end = start;
			while (s[end] != c && s[end] != '\0')
				end++;
			copy[i] = ft_substr(s, start, end - start);
			if (!copy[i])
				return (free_mem(copy, i));
			i++;
			start = end;
		}
	}
	copy[i] = NULL;
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**memory;
	char	**words;

	if (!s)
		return (NULL);
	memory = (char **)malloc((ft_cont_words(s, c) + 1) * sizeof(char *));
	if (memory == NULL)
		return (NULL);
	words = ft_copy_words(memory, s, c);
	return (words);
}

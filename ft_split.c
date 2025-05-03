/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 03:03:03 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/03 03:12:50 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	is_sep(char c, char sep)
{
	return (c == sep);
}

static int	count_words(char const *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i] && !is_sep(str[i], sep))
		{
			count++;
			while (str[i] && !is_sep(str[i], sep))
				i++;
		}
	}
	return (count);
}

static char	*copy_word(char const *str, char sep, int *i)
{
	int		start;
	int		len;
	int		j;
	char	*word;

	start = *i;
	len = 0;
	while (str[*i] && !is_sep(str[*i], sep))
	{
		len++;
		(*i)++;
	}
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	j = 0;
	while (j < len)
	{
		word[j] = str[start + j];
		j++;
	}
	word[len] = '\0';
	return (word);
}

static void	free_split(char **split, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(split[i]);
		i++;
	}
	free(split);
}

char	**ft_split(char const *str, char sep)
{
	char	**split;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = count_words(str, sep);
	split = malloc(sizeof(char *) * (count + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] && is_sep(str[i], sep))
			i++;
		if (str[i])
		{
			split[j] = copy_word(str, sep, &i);
			if (!split[j])
				return (free_split(split, j), NULL);
			j++;
		}
	}
	split[j] = NULL;
	return (split);
}

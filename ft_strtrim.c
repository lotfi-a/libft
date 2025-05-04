/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 02:03:08 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/03 21:56:46 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	is_in_set(const char *ch, char c)
{
	while (*ch)
	{
		if (*ch == c)
			return (1);
		ch++;
	}
	return (0);
}

char	*ft_strtrim(const char *str, const char *set)
{
	char	*dst;
	int		start;
	int		end;
	int		len;
	int		i;

	start = 0;
	start = 0;
	end = ft_strlen(str) - 1;
	i = 0;
	while (str[start] && is_in_set(set, str[start]))
		start++;
	while (end > start && is_in_set(set, str[end]))
		end--;
	len = end - start + 1;
	if (len <= 0)
		return (ft_strdup(""));
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	while (start <= end)
		dst[i++] = str[start++];
	dst[i] = '\0';
	return (dst);
}

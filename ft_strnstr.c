/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 03:13:42 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/03 03:16:29 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t max)
{
	size_t	b_i;
	size_t	l_i;

	if (!*little)
		return ((char *)big);
	b_i = 0;
	while (big[b_i] && b_i < max)
	{
		l_i = 0;
		while (little[l_i] && big[b_i + l_i] && big[b_i + l_i] == little[l_i]
			&& (b_i + l_i) < max)
		{
			l_i++;
		}
		if (!little[l_i])
			return ((char *)&big[b_i]);
		b_i++;
	}
	return (NULL);
}

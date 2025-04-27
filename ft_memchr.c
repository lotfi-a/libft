/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:09:20 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/25 17:18:07 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char	*m;
	unsigned char	s;

	m = (unsigned char *)ptr;
	s = (unsigned char)ch;
	while (count--)
	{
		if (*m == s)
			return ((void *)m);
		m++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:54:49 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/25 20:55:36 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int ch, size_t count)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;
	unsigned char		c;

	d = (unsigned char *)dest;
	c = (unsigned char)ch;
	while (count--)
	{
		*d = *s;
		if (*s == c)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}

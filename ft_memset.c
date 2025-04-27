/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:10:33 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/25 17:19:04 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*p;

	p = dest;
	while (count--)
		*p++ = (unsigned char)ch;
	return (dest);
}

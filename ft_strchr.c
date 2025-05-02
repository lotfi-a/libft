/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:47:56 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/27 14:12:23 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)ch)
			return ((char *)str);
		str++;
	}
	if ((unsigned char)*str == (unsigned char)ch)
		return ((char *)str);
	return (NULL);
}

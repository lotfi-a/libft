/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:47:56 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/27 14:15:43 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*s;

	s = NULL;
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)ch)
			s = ((char *)str);
		str++;
	}
	if ((unsigned char)*str == (unsigned char)ch)
		s = ((char *)str);
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 16:43:25 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/26 20:53:00 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static int	ft_count(int value)
{
	int	i;

	i = (value <= 0);
	while (value)
	{
		value /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				size;
	unsigned int	nb;

	size = ft_count(n);
	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		nb = -n;
	}
	else
		nb = n;
	while (size-- > (n < 0))
	{
		str[size] = nb % 10 + '0';
		nb /= 10;
	}
	if (n == 0)
		str[0] = '0';
	return (str);
}

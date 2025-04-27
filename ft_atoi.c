/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:41:53 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/26 16:10:34 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isspace(int ch)
{
	return ((ch >= 9 && ch <= 13) || ch == 32);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign_count;
	int	sign;

	sign = 1;
	result = 0;
	sign_count = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		sign_count++;
		str++;
	}
	if (sign_count > 1)
		return (0);
	while (ft_isdigit(*str))
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

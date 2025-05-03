/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 23:25:03 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/02 23:46:30 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	int	*p;
	int	sum;

	sum = num * size;
	if (num != 0 && sum / num != size)
		return (NULL);
	p = malloc(sum);
	if (!p)
		return (NULL);
	ft_bzero(p, sum);
	return (p);
}

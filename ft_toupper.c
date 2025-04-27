/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 20:57:22 by laanikid          #+#    #+#             */
/*   Updated: 2025/04/25 21:23:27 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_toupper(int ch)
{
	unsigned char	uc;

	uc = (unsigned char)ch;
	if (uc >= 'a' && uc <= 'z')
		return (uc - 32);
	return (ch);
}

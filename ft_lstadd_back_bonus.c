/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:34:09 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/03 22:50:40 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p_last;

	if (lst)
	{
		if (*lst == NULL)
		{
			*lst = new;
			return ;
		}
		else
		{
			p_last = ft_lstlast(*lst);
			p_last->next = new;
		}
	}
}

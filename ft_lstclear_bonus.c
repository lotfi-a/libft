/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laanikid <laanikid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 01:10:25 by laanikid          #+#    #+#             */
/*   Updated: 2025/05/04 01:30:26 by laanikid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p_list;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		p_list = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = p_list;
	}
}

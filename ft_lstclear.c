/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:15:05 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/22 11:01:52 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	t_list	*x;
	t_list	*xdel;

	if (!lst || !del)
		return ;
	x = *lst;
	while (x)
	{
		del(x->content);
		xdel = x;
		x = x->next;
		free(xdel);
	}
	*lst = 0;
}

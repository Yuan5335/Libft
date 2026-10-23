/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:34:43 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/22 10:33:59 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	void	*a;
	t_list	*head;

	if (!lst || !f || !del)
		return (0);
	head = 0;
	while (lst)
	{
		a = f(lst->content);
		x = ft_lstnew(a);
		if (!x)
		{
			if (a)
				del(a);
			ft_lstclear(&head, del);
			return (0);
		}
		ft_lstadd_back(&head, x);
		lst = lst->next;
	}
	return (head);
}

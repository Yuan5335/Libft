/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:34:43 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 18:44:39 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void	*(*f)(void *), void (*del)(void *))
{
	t_list	*x;
	t_list	*y;
	t_list	*head;

	if (!lst || !f || !del)
		return (0);
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = f(lst->content);
	head->next = 0;
	x = lst->next;
	while (x)
	{
		y = (t_list *)malloc(sizeof(t_list));
		if (!y)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		y->content = f(x->content);
		ft_lstadd_back(&head, y);
		x = x->next;
	}
	return (head);
}
/*
#include <stdio.h>

void	*f(void *content)
{
	return (ft_strdup((char *)content));
}

void	del(void *content)
{
	free(content);
}

int main()
{
	t_list	*head;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*move;
	t_list	*new;

	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	lst1 = (t_list *)malloc(sizeof(t_list));
	if (!lst1)
	{
		free(head);
		return (0);
	}
	lst2 = (t_list *)malloc(sizeof(t_list));
	if (!lst2)
	{
		free(head);
		free(lst1);
		return (0);
	}
	head->content = "Hello ";
	head->next = lst1;
	lst1->content = "World";
	lst1->next = lst2;
	lst2->content = "!";
	lst2->next = 0;
	new = ft_lstmap(head, f, del);
	move = new;
	while (move)
	{
		printf("%s", move->content);
		move = move->next;
	}
	free(head);
	free(lst1);
	free(lst2);
	ft_lstclear(&new, del);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:15:05 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 17:42:47 by aybaassi         ###   ########.fr       */
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
/*
#include <stdio.h>

void del(void	*s)
{
	(void)s;
}

int main()
{
	t_list	*head;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*move;

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
	move = head;
	head->next = 0;
	ft_lstclear(&lst1, del);
	while (move)
	{
		printf("%s", move->content);
		move = move->next;
	}
	free(head);
}
*/

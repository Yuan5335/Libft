/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:05:14 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 17:31:20 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list	*lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
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
	lst1->next = 0;
	ft_lstdelone(lst2, del);
	while (move)
	{
		printf("%s", move->content);
		move = move->next;
	}
	free(lst1);
	free(head);
}
*/

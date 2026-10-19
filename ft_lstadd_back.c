/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:20:40 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 17:12:26 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*x;

	if (!lst || !new)
		return ;
	if (*lst == 0)
		*lst = new;
	else
	{
		x = ft_lstlast(*lst);
		x->next = new;
	}
	new->next = 0;
}
/*
#include <stdio.h>
int main()
{
	t_list	*head;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*new;
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
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
	{
		free(head);
		free(lst1);
		free(lst2);
		return (0);
	}
	head->content = "Hello ";
	head->next = lst1;
	lst1->content = "World";
	lst1->next = lst2;
	lst2->content = "!";
	lst2->next = 0;
	new->content = "Yes, ";
	new->next = 0;
	ft_lstadd_back(&head, new);
	move = head;
	while (move)
	{
		printf("%s", move->content);
		move = move->next;
	}
	free(head);
	free(lst1);
	free(lst2->next);
	free(lst2);
}
*/

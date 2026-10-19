/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:02:36 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 16:59:05 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
	ft_lstadd_front(&head, new);
	move = head;
	while (move)
	{
		printf("%s", move->content);
		move = move->next;
	}
	free(head->next);
	free(lst1);
	free(lst2);
	free(head);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:15:24 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 17:08:18 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*x;

	x = lst;
	if (!x)
		return (0);
	while (x->next)
		x = x->next;
	return (x);
}
/*
#include <stdio.h>
int main()
{
	t_list	*head;
	t_list	*lst1;
	t_list	*lst2;

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
	printf("%s\n", ft_lstlast(head)->content);
	free(lst1);
	free(lst2);
	free(head);
}
*/

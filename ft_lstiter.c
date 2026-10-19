/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 17:29:55 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 18:48:57 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void (*f)(void *))
{
	t_list	*x;

	if (!f)
		return ;
	x = lst;
	while (x)
	{
		f(x->content);
		x = x->next;
	}
}
/*
#include <stdio.h>

void	test(void *c)
{
	size_t	i;
	char	*s;

	s = (char *)c;
	i = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		i++;
	}
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
	head->content = ft_strdup("Hello ");
	if (!head->content)
		return (0);
	head->next = lst1;
	lst1->content = ft_strdup("World");
	if (!lst1->content)
	{
		free(head);
		return (0);
	}
	lst1->next = lst2;
	lst2->content = ft_strdup("!");
	if (!lst2->content)
	{
		free(head);
		free(lst1);
		return (0);
	}
	lst2->next = 0;
	move = head;
	ft_lstiter(head, test);
	while (move)
	{
		printf("%s", move->content);
		move = move->next;
	}
	free(head->content);
	free(lst1->content);
	free(lst2->content);
	free(head);
	free(lst1);
	free(lst2);
}
*/

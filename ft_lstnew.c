/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:54:55 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/22 10:50:33 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*head;

	if (!content)
		return (0);
	head = (t_list *)malloc(sizeof(t_list));
	if (!head)
		return (0);
	head->content = content;
	head->next = 0;
	return (head);
}

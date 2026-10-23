/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 16:09:17 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/22 10:56:28 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list	*lst)
{
	unsigned int	i;
	t_list			*x;

	x = lst;
	i = 0;
	while (x)
	{
		i++;
		x = x->next;
	}
	return (i);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:58:13 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/22 13:29:35 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	if (size == 0 || count == 0)
	{
		size = 1;
		count = 1;
	}
	if (count > (size_t)-1 / size)
		return (0);
	p = (unsigned char *)malloc(count * size);
	if (!p)
		return (0);
	i = 0;
	while (i < count * size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}

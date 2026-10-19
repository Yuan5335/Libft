/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:58:13 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 18:18:47 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*p;
	size_t			i;

	if (size != 0 && count > (size_t)-1 / size)
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
/*
#include <stdio.h>
int main()
{
	char	*s1;
	char	*s2;
	size_t	i;

	s1 = (char *)ft_calloc(4, 1);
	s2 = (char *)calloc(4, 1);
	i = 0;
	while (i < 4)
	{
		printf("%d %d\n", s1[i], s2[i]);
		i++;
	}
}
*/

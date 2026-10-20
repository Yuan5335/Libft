/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:38:48 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/20 18:42:40 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*s, int c)
{
	size_t	i;
	char	*a;
	char	x;

	a = (char *)s;
	x = (char)c;
	i = 0;
	while (a[i])
	{
		if (a[i] == x)
			return (a + i);
		i++;
	}
	if (x == 0)
		return (a + i);
	return (0);
}

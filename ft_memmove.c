/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:52:58 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/24 11:01:29 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	unsigned char		*a;
	const unsigned char	*b;

	if (!dst && !src)
		return (0);
	if (len == 0)
		return (dst);
	a = dst;
	b = src;
	if (a < b)
	{
		while (len--)
		{
			*a = *b;
			a++;
			b++;
		}
	}
	else
	{
		while (len--)
			a[len] = b[len];
	}
	return (dst);
}

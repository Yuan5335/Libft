/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:52:58 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/13 12:54:24 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*dst, const void	*src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a < b)
	{
		while (len--)
		{
			a = b;
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
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "Hello";
	char	s11[] = "World!";
	char	s2[] = "Hello";
	char	s22[] = "World";

	ft_memmove(s1, s11, 2);
	memmove(s2, s22, 2);
	printf("%s\n", ((unsigned char *)s1));
	printf("%s\n", ((unsigned char *)s2));
}
*/

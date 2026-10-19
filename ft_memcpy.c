/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:44:04 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/13 12:51:17 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
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

	ft_memcpy(s1, s11, 3);
	memcpy(s2, s22, 3);
	printf("%s\n", ((unsigned char *)s1));
	printf("%s\n", ((unsigned char *)s2));
}
*/

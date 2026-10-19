/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 18:49:16 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/13 12:47:13 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int c, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	x;

	a = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (a[i] == x)
			return ((void *)(a + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";

	printf("%s\n", ft_memchr(s1, 'l', 4));
	printf("%s\n", memchr(s2,'l', 4));
}
*/

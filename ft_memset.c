/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:11:40 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/13 12:50:03 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	unsigned char	*a;
	size_t			i;

	a = (unsigned char *)b;
	i = 0;
	while (i < len)
		a[i++] = c;
	return (b);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	size_t	i;

	ft_memset(s1, 48, 5);
	memset(s2, 48, 5);
	i = 0;
	while (i < 5)
	{
		printf("%c\n", ((unsigned char)s1[i]));
		i++;
	}
	i = 0;
	while (i < 5)
	{
		printf("%c\n", ((unsigned char)s2[i]));
		i++;
	}
}
*/

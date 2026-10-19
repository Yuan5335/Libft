/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:19:55 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/13 12:48:04 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *)s;
	i = 0;
	while (i < n)
		a[i++] = 0;
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "Hello";
	char	s2[] = "Hello";
	size_t	i;

	ft_bzero(s1, 5);
	bzero(s2, 5);
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

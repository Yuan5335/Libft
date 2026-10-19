/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:38:48 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/12 17:49:34 by aybaassi         ###   ########.fr       */
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
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	*s1;
	char	*s2;

	s1 = "Hello";
	s2 = "Hello";
	printf("%s %s\n", ft_strchr(s1, 32), ft_strchr(s2, 'e'));
	printf("%s %s\n", strchr(s1, 32), strchr(s2, 'e'));
}
*/

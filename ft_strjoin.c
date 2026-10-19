/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 09:42:43 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 13:28:32 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*pput(const char	*s, char	*p, size_t	*pos, size_t len)
{
	size_t	i;
	size_t	x;

	x = *pos;
	i = 0;
	while (i < len)
	{
		p[x] = s[i];
		x++;
		i++;
	}
	*pos = x;
	return (p);
}

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	char	*p;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	p = (char *)malloc(lens1 + lens2 + 1);
	if (!p)
		return (0);
	i = 0;
	pput(s1, p, &i, lens1);
	pput(s2, p, &i, lens2);
	p[i] = '\0';
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char	s1[] = "Hello";
	char	s2[] = "World!";

	printf("%s\n", ft_strjoin(s1, s2));
}
*/

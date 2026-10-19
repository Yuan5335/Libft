/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:17 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 15:06:34 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*p;

	len = ft_strlen(s);
	p = (char *)malloc(len + 1);
	if (!p)
		return (0);
	i = 0;
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[len] = '\0';
	return (p);
}
/*
#include <stdio.h>
char	test(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	if (i % 2 != 0 && c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
int main()
{
	char	s[] = "Hello World!";

	printf("%s\n", ft_strmapi(s, test));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:24:57 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 15:13:11 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char	*s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>
void	test(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c -= 32;
	if (i % 2 != 0 && *c >= 'A' && *c <= 'Z')
		*c += 32;
}
int main()
{
	char	s[] = "Hello World!";

	ft_striteri(s, test);
	printf("%s\n", s);
}
*/

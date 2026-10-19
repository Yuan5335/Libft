/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 15:01:28 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/12 15:05:11 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char	*s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	*s1;
	char	*s2;

	s1 = "";
	s2 = "Hello";
	printf("%zu %zu\n", ft_strlen(s1), ft_strlen(s2));
	printf("%zu %zu\n", strlen(s1), strlen(s2));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:17:58 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 19:07:57 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const	*set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*p;
	size_t	size;

	if (!s1 || !set)
		return (0);
	i = 0;
	while (i < ft_strlen(s1) && ft_strchr(set, s1[i]))
		i++;
	start = i;
	if (start == ft_strlen(s1))
		start = 0;
	i = ft_strlen(s1);
	while (i > 0 && ft_strchr(set, s1[i - 1]))
		i--;
	end = i;
	size = end - start + 1;
	p = (char *)malloc(size);
	if (!p)
		return (0);
	ft_strlcpy(p, s1 + start, size);
	return (p);
}
/*
#include <stdio.h>
int main()
{
	char	s1[] = "";
	char	s2[] = " 	";

	printf("%s\n", ft_strtrim(s1, s2));
}
*/

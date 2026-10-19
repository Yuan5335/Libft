/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:09 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 12:52:39 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char	*s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	slen;

	slen = ft_strlen(s);
	if (start > slen)
		start = slen;
	if (len > slen - start)
		len = slen - start;
	a = (char *)malloc(len + 1);
	if (!a)
		return (0);
	i = 0;
	while (i < len && s[start + i])
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
/*
#include <stdio.h>
int main()
{
	char	s[] = "Hello";

	printf("%s\n", ft_substr(s, 7, 8));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:54:09 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/21 13:56:43 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char	*s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	slen;

	if (!s)
		return (0);
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

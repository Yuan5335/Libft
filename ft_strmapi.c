/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:14:17 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/22 10:15:35 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const	*s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*p;

	if (!s || !f)
		return (0);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 14:14:20 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/21 13:51:54 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char	*s1)
{
	char	*s;
	size_t	len;

	len = ft_strlen(s1);
	s = (char *)malloc(len + 1);
	if (!s)
		return (0);
	ft_memmove(s, s1, len + 1);
	return (s);
}

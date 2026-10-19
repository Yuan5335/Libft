/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 16:27:07 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/12 17:02:38 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	i = 0;
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "Hello";
	char	s11[] = "World";
	char	s2[] = "Hello";
	char	s22[] = "World";

	ft_strlcpy(s1, s11, 3);
	strlcpy(s2, s22, 3);
	printf("%s\n", ((unsigned char *)s1));
	printf("%s\n", ((unsigned char *)s2));
}
*/

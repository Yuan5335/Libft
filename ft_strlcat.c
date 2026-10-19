/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:05:23 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/12 17:28:25 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	if (dstlen >= dstsize)
		return (dstsize + srclen);
	i = 0;
	while (i < dstsize - dstlen - 1 && src[i])
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[10] = "Hello";
	char	s11[] = "World!";
	char	s2[10] = "Hello";
	char	s22[] = "World";

	ft_strlcat(s1, s11, 8);
	strlcat(s2, s22, 8);
	printf("%s\n", ((unsigned char *)s1));
	printf("%s\n", ((unsigned char *)s2));
}
*/

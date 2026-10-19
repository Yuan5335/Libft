/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 14:43:57 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/12 14:45:02 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	int	x;
	int	y;

	x = 0;
	y = 32;
	printf("%d %d\n", ft_isascii(x), ft_isascii(y));
	printf("%d %d\n", isascii(x), isascii(y));
}
*/

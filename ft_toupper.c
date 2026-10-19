/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 17:30:58 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/12 17:33:52 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int main()
{
	int	x;
	int	y;

	x = 120;
	y = (int)((2147483648 * 2) + 120);
	printf("%d %d\n", ft_toupper(x), ft_toupper(y));
	printf("%d %d\n", toupper(x), toupper(y));
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:36:56 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/15 18:51:02 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	x = 120;
	y = (int)((2147483648 * 2) + 120);
	printf("%d %d\n", ft_isalpha(x), ft_isalpha(y));
	printf("%d %d\n", isalpha(x), isalpha(y));
}
*/

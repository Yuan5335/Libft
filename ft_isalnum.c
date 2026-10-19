/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:50:01 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/15 18:55:21 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
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

	x = 50;
	y = 2147483648 * 2;
	printf("%d %d\n", ft_isalnum(x), ft_isalnum(y));
	printf("%d %d\n", isalnum(x), isalnum(y));
}
*/

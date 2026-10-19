/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 11:46:20 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/15 18:53:13 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	y = 78;
	printf("%d %d\n", ft_isdigit(x), ft_isdigit(y));
	printf("%d %d\n", isdigit(x), isdigit(y));
}
*/

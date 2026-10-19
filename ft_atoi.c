/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 12:09:28 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 12:44:09 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ws(const char	*str, size_t	*pos)
{
	size_t	i;
	int		sign;

	sign = 1;
	i = *pos;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*pos = i;
	return (sign);
}

int	ft_atoi(const char	*str)
{
	size_t	i;
	int		sign;
	long	x;

	i = 0;
	x = 0;
	sign = ws(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (sign == 1 && x > (9223372036854775807 - (str[i] - '0')) / 10)
			return ((int)9223372036854775807);
		x = x * 10 + str[i] - 48;
		i++;
	}
	return ((int)x * sign);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
	char	s1[] = "-9223372036854775808";
	char	s2[] = "	 9223372036854775808";

	printf("%d | %d\n", ft_atoi(s1), ft_atoi(s2));
	printf("%d | %d\n", atoi(s1), atoi(s2));
}
*/

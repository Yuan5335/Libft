/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/13 17:02:07 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/20 15:18:57 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	aabs(long n)
{
	unsigned int	x;

	if (n < 0)
		x = (unsigned int)(-n);
	else
		x = (unsigned int)n;
	return (x);
}

static char	*aaloc(size_t	*pos, int sign, unsigned int x)
{
	size_t			i;
	char			*p;

	i = *pos;
	if (x == 0)
		i++;
	else
	{
		while (x)
		{
			i++;
			x /= 10;
		}
	}
	p = (char *)malloc(sign + i + 1);
	if (!p)
		return (0);
	*pos = i;
	return (p);
}

static char	*pput(char	*p, size_t	*pos, int sign, unsigned int x)
{
	size_t			i;

	i = *pos;
	p[i] = '\0';
	if (x == 0)
	{
		p[0] = '0';
		return (p);
	}
	if (sign == 1)
	{
		p[0] = '-';
		i++;
	}
	while (x)
	{
		p[--i] = (x % 10 + 48);
		x /= 10;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	size_t			i;
	unsigned int	x;
	int				sign;
	char			*p;

	i = 0;
	sign = 0;
	if (n < 0)
		sign = 1;
	x = aabs((long)n);
	p = aaloc(&i, sign, x);
	if (!p)
		return (0);
	pput(p, &i, sign, x);
	return (p);
}

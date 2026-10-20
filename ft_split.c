/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 12:51:15 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/20 15:18:07 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	maxlen(char const	*s, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (x);
		while (s[i] && s[i] != c)
			i++;
		x++;
	}
	return (x);
}

static char	**aalloc(char const	*s, char c, char	**str)
{
	size_t	i;
	size_t	j;
	size_t	x;

	i = 0;
	x = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (str);
		while (s[i] && s[i] != c)
		{
			j++;
			i++;
		}
		str[x] = (char *)malloc(j + 1);
		if (!str[x++])
			return (0);
	}
	return (str);
}

static int	ffree(char **str, size_t maxlen)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (i < maxlen)
	{
		if (!str[i])
		{
			x = 1;
			break ;
		}
		i++;
	}
	if (x == 1)
	{
		while (i--)
			free(str[i]);
		free(str);
	}
	return (x);
}

static char	**ppput(char const	*s, char	**str, char c)
{
	size_t	i;
	size_t	x;
	size_t	j;

	i = 0;
	x = 0;
	while (s[i])
	{
		j = 0;
		while (s[i] && s[i] == c)
			i++;
		if (!s[i])
			return (str);
		while (s[i] && s[i] != c)
		{
			str[x][j] = s[i];
			i++;
			j++;
		}
		str[x][j] = '\0';
		x++;
	}
	return (str);
}

char	**ft_split(char const	*s, char c)
{
	char	**str;
	size_t	x;

	x = maxlen(s, c);
	str = (char **)malloc((x + 1) * sizeof(char *));
	if (!str)
		return (0);
	aalloc(s, c, str);
	if (ffree(str, x))
		return (0);
	ppput(s, str, c);
	str[x] = 0;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:34:28 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 15:32:31 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char	*s, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, len);
}
/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;
	char	s[] = "Hello!";

	fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
	ft_putstr_fd(s, fd);
	close(fd);
}
*/

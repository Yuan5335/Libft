/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aybaassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 15:38:44 by aybaassi          #+#    #+#             */
/*   Updated: 2026/10/18 15:34:54 by aybaassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char	*s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
#include <stdio.h>
#include <fcntl.h>
int main()
{
	int fd;
	char	s[] = "Hello!";

	fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
	ft_putendl_fd(s, fd);
	close(fd);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:36:51 by oufisaou          #+#    #+#             */
/*   Updated: 2022/05/05 19:06:39 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

long int	the_time(void)
{
	struct timeval	tp;
	long int		time;

	if (gettimeofday(&tp, NULL) == -1)
		exit_program(7);
	time = (tp.tv_sec * 1000) + (tp.tv_usec / 1000);
	return (time);
}

void	ft_usleep(long time)
{
	long int	start;

	start = 0;
	start = the_time();
	while ((the_time() - start) < time)
		usleep(50);
	return ;
}

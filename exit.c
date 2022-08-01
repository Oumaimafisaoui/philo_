/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 20:50:08 by oufisaou          #+#    #+#             */
/*   Updated: 2022/05/05 17:54:43 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	exit_program(int flag)
{
	if (flag == 1)
		ft_putstr_fd("\033[91m Invalid numbers of args!Try again\033[0m", 2);
	if (flag == 2)
		ft_putstr_fd("\033[91m Problem in argument limits! Try again\033[0m", 2);
	if (flag == 5)
		ft_putstr_fd("\033[91m Problem in mutex! Try again\033[0m", 2);
	if (flag == 6)
		ft_putstr_fd("\033[91m Problem in philo! Try again\033[0m", 2);
	if (flag == 7)
		ft_putstr_fd("\033[91m Gettimeofday failled Try again !\n\033[0m", 2);
}

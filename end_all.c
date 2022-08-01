/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_all.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 01:16:38 by oufisaou          #+#    #+#             */
/*   Updated: 2022/05/05 17:53:56 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	end_all(t_all *all)
{
	int	index;

	index = 0;
	while (all->p.philo_num--)
		pthread_mutex_destroy(&all->p.forks[all->p.philo_num]);
	free(all->p.forks);
	free(all->philo);
	pthread_mutex_destroy(&all->p.print);
	pthread_mutex_destroy(&all->p.dead);
}

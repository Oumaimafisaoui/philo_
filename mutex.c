/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 21:27:53 by oufisaou          #+#    #+#             */
/*   Updated: 2022/05/05 18:27:08 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	mutex_initialize(t_all *all)
{
	int	index;

	all->p.forks = malloc(sizeof(t_mutex) * all->p.philo_num);
	if (!all->p.forks)
		return (1);
	index = 0;
	while (index < all->p.philo_num)
	{
		if (pthread_mutex_init(&all->p.forks[index], NULL))
		{
			free(all->p.forks);
			return (1);
		}
		index++;
	}
	if ((pthread_mutex_init(&all->p.print, NULL)) \
	|| (pthread_mutex_init(&all->p.dead, NULL)))
	{
		free(all->p.forks);
		return (1);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 00:10:26 by oufisaou          #+#    #+#             */
/*   Updated: 2022/05/05 20:02:41 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	parse_init(t_all *args, int argc, char **argv)
{
	args->p.philo_num = ft_atoi(argv[1]);
	args->p.p_dead = ft_atoi(argv[2]);
	args->p.p_eat = ft_atoi(argv[3]);
	args->p.p_sleep = ft_atoi(argv[4]);
	args->p.flag = 0;
	if (argc == 5)
		args->p.must_eat = 0;
	else
	{
		args->p.must_eat = ft_atoi(argv[5]);
		if (args->p.must_eat <= 0)
			return (0);
	}
	if (!limits_check(args))
		return (0);
	return (1);
}

int	arguments_check(int argc, char **argv)
{
	int	index;

	index = 1;
	if (argc < 5 || argc > 6)
		return (0);
	while (argv[index])
	{
		if (!ft_is_digit(argv[index]) || (!ft_atoi(argv[index])))
			return (0);
		index++;
	}
	return (1);
}

int	limits_check(t_all *args)
{
	if (args->p.philo_num <= 0 || \
	(args->p.p_sleep <= 0 || args->p.p_sleep >= 2147483647) \
	|| (args->p.p_eat <= 0 || args->p.p_eat >= 2147483647) || \
	(args->p.p_dead <= 0 || args->p.p_dead >= 2147483647))
		return (0);
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 22:34:32 by oufisaou          #+#    #+#             */
/*   Updated: 2022/05/05 19:22:29 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <stdio.h>
# include <stdlib.h>
# include <pthread.h>
# include <sys/syscall.h>
# include <fcntl.h>
# include <unistd.h>
# include <sys/time.h>

typedef pthread_mutex_t	t_mutex;

typedef struct s_propreties
{
	int			philo_num;
	int			p_eat;
	int			p_dead;
	int			p_sleep;
	long long	start_time;
	int			stop;
	t_mutex		*forks;
	int			must_eat;
	t_mutex		print;
	t_mutex		dead;
	int			flag;
}t_propreties;

typedef struct s_phil
{
	int				id;
	int				num_eat;
	long long		last_eat;
	pthread_t		thread;
	int				fork_left;
	int				fork_right;
	t_propreties	*tmp;
}t_phil;

typedef struct s_all
{
	t_phil			*philo;
	t_propreties	p;
}t_all;

int		protection(t_phil *ph);
int		limits_check(t_all *args);
int		arguments_check(int argc, char **argv);
int		parse_init(t_all *args, int argc, char **argv);
void	exit_program(int flag);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *dest);
int		ft_is_digit(char *s);
size_t	ft_strlen(const char *str);
int		mutex_initialize(t_all *all);
int		philo_initialize(t_all *all);
int		philos(t_all *all);
int		philo_initialize(t_all *all);
void	*philos_routine(void *arg);
void	time_sleep(t_propreties *all);
long	int	the_time(void);
void	end_all(t_all *all);
void	print(t_phil *philo, char *str, int flag);
int		philo_eat(t_phil *philo);
void	check_eat(t_all *all);
void	is_dead(t_all *all);
void	ft_usleep(long n);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
#endif
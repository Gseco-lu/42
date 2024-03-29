/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:25:47 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/03/02 15:25:47 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	lock_forks(int *left, int *right, t_data *data, t_philo *philo)
{
	*left = philo->id - 1;
	*right = philo->id;
	if (philo->id == data->n_philo)
	{
		*right = *left;
		*left = 0;
	}	
	lock_mutex(&(data->fork[*right]));
	write_logs(philo->id, R_FORK_TAKEN, data);
	lock_mutex(&(data->fork[*left]));
	write_logs(philo->id, L_FORK_TAKEN, data);
}

static void	eat(t_data *data, t_philo *philo)
{
	int	left;
	int	right;

	lock_forks(&left, &right, data, philo);
	lock_mutex(&data->check_lastmeal);
	philo->last_meal = get_time(data->t0);
	unlock_mutex(&data->check_lastmeal);
	write_logs(philo->id, EATING, data);
	ft_usleep(data->t_eat);
	unlock_mutex(&(data->fork[left]));
	unlock_mutex(&(data->fork[right]));
	philo->ate++;
	if (data->n_eat && data->n_eat == philo->ate)
	{
		philo->ate_all = 1;
		lock_mutex(&data->check_all_ate);
		data->all_ate++;
		unlock_mutex(&data->check_all_ate);
	}
}

static int	check_death(t_data *data)
{
	int	i;

	lock_mutex(&data->check_end);
	i = data->end;
	unlock_mutex(&data->check_end);
	if (i)
		return (0);
	return (1);
}

void	*routine(void *p)
{
	t_data	*data;
	t_philo	*philo;

	philo = (t_philo *)p;
	data = philo->data;
	if (philo->id % 2 != 0)
		usleep(5000);
	while (check_death(data))
	{
		eat(data, philo);
		if (philo->ate_all)
			break ;
		write_logs(philo->id, SLEEPING, data);
		ft_usleep(data->t_sleep);
		write_logs(philo->id, THINKING, data);
	}
	return (NULL);
}

void	check_all(t_data *data)
{
	int	i;

	if (data->argc < 5 || data->argc > 6)
		error_msg(N_ARGS_ERROR);
	i = 0;
	while (++i != data->argc)
	{
		if (ft_atol(data->argv[i]) < 1)
			error_msg(ARG_ERROR);
	}
}

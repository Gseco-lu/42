/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   death.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:25:53 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/03/02 15:25:53 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	end_simulation(t_data *data)
{
	t_philo	*philo;
	int		i;

	if (data->n_philo == 1)
	{
		free(data->philo);
		return ;
	}
	i = 0;
	while (++i <= data->n_philo)
	{
		philo = data->philo->next;
		pthread_mutex_destroy(&(data->fork[i - 1]));
		free(data->philo);
		data->philo = philo;
	}
	free(data->fork);
	destroy_mutex(&data->logs);
	destroy_mutex(&data->check_end);
	destroy_mutex(&data->check_lastmeal);
	destroy_mutex(&data->check_all_ate);
}

static int	check_death(t_data *data, t_philo *philo)
{
	long long	lastmeal;

	lock_mutex(&data->check_lastmeal);
	lastmeal = philo->last_meal;
	unlock_mutex(&data->check_lastmeal);
	if (lastmeal && get_time(data->t0) - lastmeal > data->t_die)
	{
		printf("%s%lli ms%s | %sPhilo %i %s\n", BLUE,
			get_time(data->t0), RESET, RED, philo->id, DIED);
		lock_mutex(&data->check_end);
		data->end = 1;
		unlock_mutex(&data->check_end);
		return (1);
	}
	return (0);
}

static int	check_all_ate(t_data *data)
{
	int	i;

	lock_mutex(&data->check_all_ate);
	i = data->all_ate;
	unlock_mutex(&data->check_all_ate);
	if (i == data->n_philo)
		return (1);
	return (0);
}

void	*check_end(void *d)
{
	t_data	*data;
	t_philo	*philo;

	data = (t_data *)d;
	philo = data->philo;
	while (!(check_all_ate(data) || check_death(data, philo)))
		philo = philo->next;
	return (NULL);
}

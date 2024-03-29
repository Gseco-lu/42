/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gseco-lu <gseco-lu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:25:56 by gseco-lu          #+#    #+#             */
/*   Updated: 2023/03/02 15:25:56 by gseco-lu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static void	init_all(t_data *data)
{
	data->n_philo = ft_atol(data->argv[1]);
	data->t_die = ft_atol(data->argv[2]);
	data->t_eat = ft_atol(data->argv[3]);
	data->t_sleep = ft_atol(data->argv[4]);
	data->n_eat = 0;
	data->all_ate = 0;
	data->end = 0;
	data->t0 = 0;
	if (data->argv[5])
		data->n_eat = ft_atol(data->argv[5]);
	create_philos(data);
}

int	main(int argc, char **argv)
{
	t_data	data;

	data.argv = argv;
	data.argc = argc;
	check_all(&data);
	init_all(&data);
	join_threads(&data);
	ft_usleep(100);
	end_simulation(&data);
	return (0);
}

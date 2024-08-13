/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_set.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 21:42:39 by caiperei          #+#    #+#             */
/*   Updated: 2024/08/13 09:24:20 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	set_bool(pthread_mutex_t *mutex, bool *dest, bool value)
{
	pthread_mutex_lock(mutex);
	*dest = value;
	pthread_mutex_unlock(mutex);
}

bool	get_bool(pthread_mutex_t *mutex, bool *src)
{
	bool	value;

	pthread_mutex_lock(mutex);
	value = *src;
	pthread_mutex_unlock(mutex);
	return (value);
}

long	get_long(pthread_mutex_t *mutex, long *src)
{
	long	value;

	pthread_mutex_lock(mutex);
	value = *src;
	pthread_mutex_unlock(mutex);
	return (value);
}

void	set_long(pthread_mutex_t *mutex, long *dest, long value)
{
	pthread_mutex_lock(mutex);
	*dest = value;
	pthread_mutex_unlock(mutex);
}

bool	simu_end(t_data *data)
{
	return (get_bool(&data->data_mutex, &data->end_simu));
}

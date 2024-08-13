/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:51:57 by caiperei          #+#    #+#             */
/*   Updated: 2024/08/13 09:24:20 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	t_data	data;

	if (ac == 5 || ac == 6)
	{
		get_datas(&data, av);
		data_start(&data);
		dinner_start(&data);
		clean(&data);
	}
	else
		printf(RED "Error: Wrong number of arguments\n" RST);
}

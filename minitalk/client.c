/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:20:28 by caiperei          #+#    #+#             */
/*   Updated: 2024/02/21 13:36:54 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	send_bits(int pid, char *str)
{
	int	i;
	int	x;

	i = 0;
	while (*str)
	{
		x = *(str);
		while (i < 8)
		{
			if (x << i & 0b10000000)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			i++;
			usleep(600);
		}
		str++;
		i = 0;
	}
}

int	main(int ac, char **av)
{
	if (ac != 3 || !av[2])
	{
		ft_printf("Error! Você deve informar");
		ft_printf(" <PID> <MENSAGEM>\n");
		exit(1);
	}
	send_bits(ft_atoi(av[1]), av[2]);
	return (0);
}

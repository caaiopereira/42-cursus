/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:20:59 by caiperei          #+#    #+#             */
/*   Updated: 2024/02/21 13:21:06 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	print_bits(int bit)
{
	static int				i;
	static unsigned char	x;

	if (bit == SIGUSR2)
		x = x << 1;
	else if (bit == SIGUSR1)
		x = (x << 1) | 0b00000001;
	i++;
	if (i == 8)
	{
		ft_printf("%c", x);
		i = 0;
		x = 0;
	}
}

int	main(void)
{
	ft_printf("SERVER PID: %d\n", getpid());
	ft_printf("\n");
	while (1)
	{
		signal(SIGUSR1, print_bits);
		signal(SIGUSR2, print_bits);
		pause();
	}
	return (0);
}

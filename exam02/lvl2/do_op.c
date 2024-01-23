/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:00:22 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/10 10:10:02 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if(ac == 4)
	{
		if(av[2][0] == '+')
			printf("%d", (atoi(av[1]) + atoi(av[3])));
		if(av[2][0] == '-')
			printf("%d", (atoi(av[1]) - atoi(av[3])));
		if(av[2][0] == '*')
			printf("%d", (atoi(av[1]) * atoi(av[3])));
		if(av[2][0] == '/')
			printf("%d", (atoi(av[1]) / atoi(av[3])));
		if(av[2][0] == '%')
			printf("%d", (atoi(av[1]) % atoi(av[3])));
	}
	printf("\n");
}

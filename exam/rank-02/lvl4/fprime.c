/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 13:52:03 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/30 14:06:46 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	int i = 1;
	int number;

	if(ac == 2)
	{
		number = atoi(av[1]);
		if(number == 1)
			printf("1");
		while(number >= i++)
		{
			if(number % i == 0)
			{
				printf("%d", i);
				if(number == i)
					break;
				printf("*");
				number /= i;
				i = 1;
			}
		}
	}
	printf("\n");
}

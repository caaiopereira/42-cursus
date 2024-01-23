/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:02:59 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/12 13:23:42 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int ascii[255] = {0};

		for(int i = 0; i < 3; i += 1)
		{
			int x = 0;
			while(av[i][x])
			{
				if(ascii[(int)av[i][x]] == 0)
				{
					ascii[(int)av[i][x]] = 1;
					write(1, &av[i][x], 1);
				}
				x += 1;
			}
		}
	}
	write(1, "\n", 1);
}

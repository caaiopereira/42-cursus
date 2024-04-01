/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 14:32:06 by caiperei          #+#    #+#             */
/*   Updated: 2024/04/01 14:41:57 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	if(ac == 3)
	{
		int ascii[255] = {0};

		for (int i = 1; i < 3; i++)
		{
			int j = 0;
			while(av[i][j])
			{
				if(ascii[(int)av[i][j]] == 0)
				{
					ascii[(int)av[i][j]] = 1;
					write(1, &av[i][j], 1);
				}
				j++;
			}
		}
	}
	write(1, "\n", 1);
}



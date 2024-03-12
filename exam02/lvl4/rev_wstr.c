/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:07:37 by caiperei          #+#    #+#             */
/*   Updated: 2024/03/05 15:08:57 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
	int start;
	int end;
	int i = 0;
		
	if(ac == 2)
	{   
		while(av[1][i])
			i++;
		while(i >= 0)
		{
			while(av[1][i] == '\0' || av[1][i] == ' ' || av[1][i] == '\t')
				i--;
			end = i;
			while(av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
				i--;
			start = i + 1;
			int  flg;
			flg = start;
			while(end >= start)
			{
				write (1, &av[1][start],1);
				start++;		
			}
			if (flg != 0)
			{
				write(1, " ", 1);
			}
		}
	}
	write(1, "\n", 1);
}

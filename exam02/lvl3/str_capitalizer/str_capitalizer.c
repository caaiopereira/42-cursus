/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 14:11:03 by caiperei          #+#    #+#             */
/*   Updated: 2024/01/21 14:11:04 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	str_capitalizer(char *str)
{
	int i = 0;

	if(str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	write(1, &str[i], 1);
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ' ' || str[i - 1] == '\t'))
			str[i] = str[i] - 32;
		write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int i; 

	if(ac < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while(ac > i)
		{
			str_capitalizer(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return 0;
}

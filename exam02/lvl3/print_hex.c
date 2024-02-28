/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:50:49 by caiperei          #+#    #+#             */
/*   Updated: 2024/02/28 13:58:57 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
	int n = 0;

	while(*str)
	{
		n = n * 10;
		n = n + *str - '0';
		str++;
	}
	return n;
}

void print_hex(int n)
{
	char digit[] = "0123456789abcdef";

	if(n >= 16)
		print_hex(n / 16);
	write(1, &digit[n % 16], 1);
}

int main(int ac, char **av)
{
	if(ac == 2)
		print_hex(ft_atoi(av[1]));
	write(1, "\n", 1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:24:39 by caiperei          #+#    #+#             */
/*   Updated: 2024/03/15 11:31:02 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int atoi(char *str)
{
	int result = 0;
	int sign = 1;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if(*str == '-')
		sign = -1;
	if(*str == '-' || *str == '+')
		str++;
	while(*str >= '0' && *str <= '9')
	{	
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}

void putnbr(int n)
{
	char digit;

	if(n >= 10)
		putnbr(n / 10);
	digit = (n % 10) + '0';
	write(1, &digit, 1);
}

int main(int ac, char **av)
{
	int i = 1;
	int nbr;

	if(ac == 1)
		write(1, "\n", 1);	
	else
	{
		nbr = atoi(av[1]);
		while(i <= 9)
		{
			putnbr(i);
			write(1, " x ", 3);
			putnbr(nbr);
			write(1, " = ", 3);
			putnbr(i * nbr);
			write(1, "\n", 1);
			i++;
		}
	}
}

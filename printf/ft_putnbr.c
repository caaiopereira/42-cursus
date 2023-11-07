/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 08:39:57 by caiperei          #+#    #+#             */
/*   Updated: 2023/11/07 08:44:08 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int num)
{
	static int	count;
	int			sign;

	sign = 0;
	count = 0;
	if (num == -2147483648)
	{
		count = write(1, "-2147483648", 11);
		return (count);
	}
	if (num < 0)
	{
		sign = ft_putchar('-');
		num *= -1;
	}
	if (num >= 10)
		ft_putnbr(num / 10);
		count += ft_putchar((num % 10) + 48);
		return (count + sign);
}

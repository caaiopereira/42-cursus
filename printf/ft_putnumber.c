/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:05:10 by caiperei          #+#    #+#             */
/*   Updated: 2023/11/07 13:37:30 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnumber(unsigned int num)
{
	static unsigned int	count;
	unsigned int		sign;

	sign = 0;
	count = 0;

	if (num >= 10)
			ft_putnumber(num / 10);
	count += ft_putchar((num % 10) + 48);
	return (count + sign);
}

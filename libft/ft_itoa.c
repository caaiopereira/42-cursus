/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:10:18 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:11:41 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	converte um numero inteiro para uma string
*/

#include "libft.h"

static size_t	ft_itoa_size(int number)
{
	size_t	size;

	size = 0;
	if (number <= 0)
		size++;
	while (number != 0)
	{
		number = number / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	i;
	char	*str;

	i = ft_itoa_size(n);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (n < 0)
		str[0] = '-';
	while (n != 0)
	{
		if (str[0] == '-')
			str[i--] = '0' + -(n % 10);
		else
			str[i--] = '0' + (n % 10);
		n = n / 10;
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_hexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 07:53:29 by caiperei          #+#    #+#             */
/*   Updated: 2024/04/02 09:12:20 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	getnb(char c)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789ABCDEF";
	while (base[i] && base[i] != c)
		i++;
	return (i);
}

int	ft_atoi_hexa(char *str)
{
	int		i;
	int		res;
	char	c;

	i = -1;
	res = 0;
	c = 0;
	while (i++, str[i] && str[i] != ' ')
	{
		c = str[i];
		if (c >= 97 && c <= 102)
			c = c - 32;
		res = (res * 16) + getnb(c);
	}
	return (res);
}

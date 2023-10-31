/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:13:57 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:32:43 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Aplica uma função a cada caractere de uma string.
*/
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s != 0 && f != 0)
	{
		while (*s != '\0')
		{
			f(i, s);
			i++;
			s++;
		}
	}
}

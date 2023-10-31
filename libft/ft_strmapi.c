/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:11:39 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:29:19 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Aplica uma função a cada caractere de uma string e retorna uma nova string.
*/
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			i;
	char			*result;
	unsigned int	x;

	i = 0;
	if (s == 0 || f == 0)
		return (0);
	while (s[i] != '\0')
	{
		i++;
	}
	result = (char *)malloc(i + 1);
	if (result == 0)
		return (0);
	x = 0;
	while (x < i)
	{
		result[x] = f(x, s[x]);
		x++;
	}
	result[i] = '\0';
	return (result);
}

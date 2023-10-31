/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:05:05 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:56:07 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Localiza a primeira ocorrência de um caractere em uma string.
*/
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && c != *s)
	{
		s++;
	}
	if (c == *s)
		return ((char *)s);
	return (0);
}

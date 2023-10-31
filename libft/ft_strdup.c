/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:11:17 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:18:25 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	duplica uma string e retorna a cópia duplicada
*/
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;

	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
	{
		return (0);
	}
	ft_memcpy(str, s, ft_strlen(s) + 1);
	return (str);
}

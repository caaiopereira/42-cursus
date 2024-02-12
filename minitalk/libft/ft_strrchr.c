/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:19:49 by caiperei          #+#    #+#             */
/*   Updated: 2023/11/07 10:44:59 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*ini;

	ini = NULL;
	while (*str != '\0')
	{
		if (*str == c)
		{
			ini = str;
		}
		str++;
	}
	if (c == 0)
	{
		return ((char *)str);
	}
	return ((char *)ini);
}

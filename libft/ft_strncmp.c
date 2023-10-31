/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:14:13 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:34:14 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Compara duas strings até um número especificado de caracteres.
*/
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str_s1;
	unsigned char	*str_s2;

	str_s1 = (unsigned char *)s1;
	str_s2 = (unsigned char *)s2;
	i = 0;
	while ((str_s1[i] != '\0' || str_s2[i] != '\0') && (i < n))
	{
		if (str_s1[i] != str_s2[i])
		{
			return (str_s1[i] - str_s2[i]);
		}
		i++;
	}
	return (0);
}

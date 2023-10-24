/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:48:10 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/24 10:53:24 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
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

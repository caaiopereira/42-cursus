/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:18:14 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/24 14:32:20 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if ((!dst || !src) && size == 0)
		return (0);
	if (size <= ft_strlen(dst))
		return (size + ft_strlen(src));
	while (i < size && dst[i] != '\0')
		i++;
	while (i < size - 1 && src[x] != '\0')
	{
		dst[i] = src[x];
		i++;
		x++;
	}
	dst[i] = '\0';
	while (src[x] != '\0')
	{
		x++;
		i++;
	}
	return (i);
}

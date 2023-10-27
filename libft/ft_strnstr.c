/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 11:02:12 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/24 15:45:30 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;

	little_len = ft_strlen(little);
	if (little_len == 0)
	{
		return ((char *)big);
	}
	if (len == 0)
		return (0);
	while (*big && len >= little_len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (0);
}

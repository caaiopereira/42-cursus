/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:22:42 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/25 15:14:00 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	if (!s1 || !s2)
		return (0);
	result = (char *)malloc(ft_strlen(s1) + ft_strlen(s2 + 1));
	if (result == 0)
		return (0);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		result[i] = s2[x];
		i++;
		x++;
	}
	result[i] = '\0';
	return (result);
}

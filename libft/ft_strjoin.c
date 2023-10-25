/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:22:42 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/25 14:11:32 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	total_len;

	if (s1 == 0 || s2 == 0)
		return (0);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	result = malloc(sizeof(char) * (total_len + 1));
	if (result == 0)
		return (0);
	ft_strlcpy(result, s1, total_len + 1);
	ft_strlcat(result, s2, total_len + 1);
	return (result);
}

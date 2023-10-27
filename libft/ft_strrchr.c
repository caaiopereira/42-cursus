/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:45:44 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/24 11:56:25 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*ini;

	ini = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *ini && c != *s)
		s--;
	if (c == *s)
		return ((char *)s);
	return (0);
}

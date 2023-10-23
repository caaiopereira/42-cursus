/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 09:45:44 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/23 14:55:48 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*i;

	i = 0;
	while (*s != '\0')
	{
		if (*s == (unsigned char)c)
		{
			i = (char *)s;
		}
		s++;
	}
	if (!c != '\0')
		i = ((char *)s);
	return (i);

}
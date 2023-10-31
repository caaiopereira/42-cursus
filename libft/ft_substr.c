/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:08:38 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:01:33 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	pega uma parte da string e cria uma menor a partir dela
*/
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		s_len;
	char		*substring;
	const char	*src;
	char		*dest;

	if (s == 0)
		return (0);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	substring = (char *)malloc(len + 1);
	if (substring == 0)
		return (0);
	src = s + start;
	dest = substring;
	while (*src != '\0' && len > 0)
	{
		*dest++ = *src++;
		len--;
	}
	*dest = '\0';
	return (substring);
}

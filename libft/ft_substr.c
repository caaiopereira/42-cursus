/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:30:04 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/25 10:08:03 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

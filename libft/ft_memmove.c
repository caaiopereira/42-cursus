/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 15:44:04 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/24 11:46:19 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*destiny;
	const unsigned char	*source;

	destiny = (unsigned char *)dest;
	source = (const unsigned char *)src;
	if (destiny < source)
	{
		while (n--)
		{
			*destiny = *source;
			destiny++;
			source++;
		}
	}
	else if (destiny > source)
	{
		destiny = n + destiny;
		source = n + source;
		while (n--)
		{
			*(--destiny) = *(--source);
		}
	}
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 15:59:23 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:46:08 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Copia uma área de memória para outra, mesmo se houver sobreposição.
*/
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:12:09 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:30:01 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Converte um caractere em minúscula (se for uma letra maiúscula).
*/
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

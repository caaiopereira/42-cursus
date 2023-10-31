/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caiperei <caiperei@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:14:41 by caiperei          #+#    #+#             */
/*   Updated: 2023/10/31 10:34:55 by caiperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Converte um caractere em maiúscula (se for uma letra minúscula).
*/
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
